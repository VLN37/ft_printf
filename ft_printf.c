/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 04:42:22 by jofelipe          #+#    #+#             */
/*   Updated: 2021/09/22 18:53:58 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static char	determine_type(const char *s, t_data *data)
// {
// 	s++;
// 	if (*s == 'c')
// 		return ('c');
// 	else if (*s == 'd')
// 		return ('d');
// 	else if (*s == 'p')
// 		return ('p');
// 	else if (*s == 's')
// 		return ('s');
// 	else if (*s == 'i')
// 		return ('i');
// 	else if (*s == 'u')
// 		return ('u');
// 	else if (*s == 'x')
// 		return ('x');
// 	else if (*s == 'X')
// 		return ('X');
// 	else if (*s == '%')
// 		return ('%');
// 	else
// 		return (0);
// }

static void	init_arg(t_data *data, va_list args)
{
	if (data->type == 'c')
		data->ch = va_arg(args, int);
	else if (data->type == 's')
		data->str = va_arg(args, char *);
	else if (data->type == 'p')
		data->hex_ptr = va_arg(args, void *);
	else if (data->type == 'd')
		data->nbr = va_arg(args, int);
	else if (data->type == 'i')
		data->nbr = va_arg(args, int);
	else if (data->type == 'u')
		data->unsig = va_arg(args, unsigned int);
	else if (data->type == 'x')
		data->unsig = va_arg(args, unsigned int);
	else if (data->type == 'X')
		data->unsig = va_arg(args, unsigned int);
	else
		data->ch = va_arg(args, int);
}

static void	call_conversion(t_data *data)
{
	if (data->type == 'c')
	{
		data->len += 1;
		write(1, &data->ch, 1);
	}
	if (data->type == 's')
		data->len += print_string(data->str);
	if (data->type == 'p')
		data->len += print_ptr_addrs(data->hex_ptr);
	if (data->type == 'd')
		data->len += print_nbr(data->nbr, data);
	if (data->type == 'i')
		data->len += print_nbr(data->nbr, data);
	if (data->type == 'u')
		data->len += print_unsigned(data->unsig, data);
	if (data->type == 'x')
		data->len += print_unsigned_hex(data->unsig, 0, data);
	if (data->type == 'X')
		data->len += print_unsigned_hex(data->unsig, 1, data);
	if (data->type == '%')
	{
		data->len += 1;
		write(1, "%", 1);
	}
}

static int	count_args(const char *s)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == '%')
		{
			i++;
			s++;
		}
		s++;
	}
	return (i);
}

static int	write_filler(const char *s, t_data *data)
{
	int	i;

	i = 0;
	while (s[i] != '%' && s[i])
		++i;
	write(1, s, i);
	data->len += i;
	return (i);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	t_data	data;

	data.len = 0;
	va_start(args, s);
	data.argc = count_args(s);
	while (data.argc--)
	{
		init_flags(&data);
		s += write_filler(s, &data);
		data.type = format_parser(s, &data);
		s += data.offset;
		if (data.type != '%')
			init_arg(&data, args);
		call_conversion(&data);
	}
	s += write_filler(s, &data);
	va_end(args);
	return (data.len);
}
