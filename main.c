#include "ft_printf.h"

int	main(void)
{
	int	n;
	int brazil = 1;
	int alemanha = 7;
	int whilezera = 5;
	int welton = 2;
	char *str = "while monstro";
	ft_printf("123 %c %c %c %c %c", 'P', 'R', 'I', 'N', 'T');
	ft_printf("\n");
	ft_printf("%s", "SECOND BASE\n");
	ft_printf("%p\n", n);
	printf("%p\n", &n);
	ft_printf("WHILE %d - %d WELTON\n", alemanha, brazil);
	ft_printf("SAN %i - %i COR\n", whilezera, welton);
	ft_printf("%%UNSIGNED INT %u\n", -1);
	ft_printf("UNSIGNED TO HEXA: %x\n", 1233454523);

}

//'C', 'A', 'R', 'A', 'L', 'H', 'O'
