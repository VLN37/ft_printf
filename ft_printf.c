#include "ft_printf.h"

char 	determine_type(const char *s, t_data *data)
{
	s++;
	if (*s == 'c')
		return ('c');
	else if (*s == 'd')
		return ('d');
	else if (*s == 'p')
		return ('p');
	else if (*s == 's')
		return ('s');
	else if (*s == 'i')
		return ('i');
	else if (*s == 'u')
		return ('u');
	else if (*s == 'x')
		return ('x');
	else if (*s == '%')
		return ('%');
	else
		return (0);
}

void	init_arg(t_data *data, va_list args)
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
}

void 	call_conversion(t_data *data)
{
	if (data->type == 'c')
		data->len += print_char(data->ch);
	if (data->type == 's')
		data->len += print_string(data->str);
	if (data->type == 'p')
		data->len += print_ptr_addrs(data->hex_ptr);
	if (data->type == 'd')
		data->len += print_nbr(data->nbr);
	if (data->type == 'i')
		data->len += print_nbr(data->nbr);
	if (data->type == 'u')
		data->len += print_unsigned(data->unsig);
	if (data->type == 'x')
		data->len += print_hex(data->unsig);
	if (data->type == '%')
		write(1, "%", 1);
}

int		count_args(const char *s)
{
	int	i;

	i = 0;

	while (*s)
	{
		if (*s == '%')
		{
			i++;
			if (*s == '%')
				s++;
		}
		s++;
	}
	return (i);
}

int		write_filler(const char *s, t_data *data)
{
	int	i;

	i = 0;
	while(s[i] != '%' && s[i])
		++i;
	//ft_putnbr_fd(i, 1);
	write(1, s, i);
	data->len += i;
	return (i);
}

int		ft_printf(const char *s, ...)
{
	va_list	args;
	t_data	data;

	data.len = 0;
	va_start(args, s);
	data.argc = count_args(s);
	while(data.argc--)
	{
		s += write_filler(s, &data);
		if (*s == '%')
		{
			data.type = determine_type(s, &data);
			s += 2;
		}
		init_arg(&data, args);
		call_conversion(&data);
	}
	s += write_filler(s, &data);
	va_end(args);
	//printf("%d\n", data.len);
	return (data.len);
}
