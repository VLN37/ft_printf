#include "ft_printf.h"
#include "libft.h"

int	print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int		print_string(char *str)
{
	size_t	i;

	i = 0;
	i = ft_strlen(str);
	write(1, str, i);
	return (i);
}

int	print_ptr_addrs(void *ptr)
{
	char			*str;
	unsigned long	i;

	i = (unsigned long)&ptr;
	str = itoa_base(i, "0123456789abcdef", 16);
	if(!*str)
		write(1, "0", 1);
	else
		write(1, str, 14);
	i = ft_strlen(str);
	free(str);
	return(i);
}

int	print_hex(unsigned int nbr)
{
	char			*str;
	unsigned long	i;


	str = itoa_base((unsigned long)nbr, "0123456789abcdef", 16);
	if(!*str)
		write(1, "0", 1);
	else
		write(1, &str[2], ft_strlen(str) - 2);
	i = ft_strlen(str);
	free(str);
	return(i);
}

int	print_nbr(int nbr)
{
	char	*str;
	int		i;

	str = ft_itoa(nbr);
	i = ft_strlen(str);
	write(1, str, i);
	free (str);
	return (i);
}

