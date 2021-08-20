#include "ft_printf.h"
#include "libft.h"

static void	ft_reverse_string(char *tab)
{
	int	counter;
	int	buffer;
	int size;

	size = ft_strlen(tab);
	counter = 0;
	while (counter < size / 2)
	{
		buffer = tab[counter];
		tab[counter] = tab[size - counter - 1];
		tab[size - counter - 1] = buffer;
		counter++;
	}
}

char	*itoa_base(unsigned long nbr, char *base_to, char *str, int basesize)
{
	int	sign;
	int	i;


	i = 0;

	if (nbr == 0)
	{
		str[i] = base_to[0];
		i++;
	}
	while (nbr != 0)
	{
		str[i] = base_to[nbr % basesize];
		i++;
		nbr = nbr / basesize;
	}
	str[i++] = 'x';
	str[i++] = '0';
	if (sign == -1)
		str[i] = '-';
	ft_reverse_string(str);
	return (str);
}
