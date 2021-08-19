#include "printf.h"

char determine_type(const char *s, t_data *data)
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

void call_conversion(t_data data)
{
	if (data.type == 'c')
		print_char(data.ch);
}

int	count_args(const char *s)
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

int	write_filler(const char *s)
{
	int	i;

	i = 0;
	while(s[i] != '%' && s[i])
		++i;
	write(1, &s, i);
	printf("%d", i);
	return (i);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	t_data	data;
	int	i;
	int	ctr;
	int argc;

	ctr = 0;
	i = 0;
	va_start(args, s);
	argc = count_args(s);
	while(ctr++ < argc)
	{
		i = 0;
		while(s[i] != '%' && s[i])
			++i;
		write(1, s, i);
		printf("%d", i);
		//s += write_filler(s);
		if (s[i] == '%')
			data.type = determine_type(&s[i], &data);
		s += i + 2;
		init_arg(&data, args);
		print_char(data.ch);
	}
	va_end(args);
	return (0);

}
