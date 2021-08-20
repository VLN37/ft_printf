#include "printf.h"

int	print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	print_string(char *str)
{
	int	i;

	i = ft_strlen(str);
	write(1, str, i);
	return (i);
}
