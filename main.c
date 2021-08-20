#include "ft_printf.h"

int	main(void)
{
	int	n;
	// char *str = "hello";
	// printf("%zu\n", ft_strlen(str));
	ft_printf("123 %c %c %c %c %c\n", 'P', 'R', 'I', 'N', 'T');
	ft_printf("\n");
	ft_printf("%s", "SECOND BASE\n");
	ft_printf("%p\n", n);
}

//'C', 'A', 'R', 'A', 'L', 'H', 'O'
