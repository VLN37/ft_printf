#include <stdio.h>
#include "ft_printf.h"

void	ft_reverse_string(char *tab);
char	*itoa_base(unsigned long nbr, char *base_to, char *str, int basesize);

int	main(void)
{
	unsigned long	i;
	int p;
	char *str;

	p = 13;
	i = (unsigned long)&p;

	//printf("%lu\n%p\n0x%lx\n", i, &p, i);
	printf("%p\n", (void *)i);
	printf("%ld\n", i);


	str = malloc(sizeof(char) * 15);
	str = itoa_base(i, "0123456789abcdef", str, 16);
	printf("%s\n", str);
	free(str);
}
