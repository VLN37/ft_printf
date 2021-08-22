#include "ftprintf.h"
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

static int	count_numbers(unsigned long nbr, int basesize)
{
	int	i;

	i = 0;
	if (!nbr)
		return (i + 1);
	while (nbr)
	{
		nbr = nbr / basesize;
		i++;
	}
	return (i);
}

char	*itoa_base(unsigned long nbr, char *base_to, unsigned long basesize)
{
	int	sign;
	int	i;
	char *res;
	int	size_str;

	size_str = count_numbers(nbr, basesize);
	res = (char *)ft_calloc(size_str + 25, sizeof(char));
	i = 0;
	if (nbr == 0)
		res[i++] = base_to[0];
	while (nbr)
	{
		res[i] = base_to[nbr % basesize];
		i++;
		nbr = nbr / basesize;
	}
	res[i++] = 'x';
	res[i++] = '0';
	ft_reverse_string(res);
	return (res);
}

