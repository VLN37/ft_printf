#include "ft_printf.h"

int	main(void)
{
	int	n;
	int brazil = 1;
	int alemanha = 7;
	int santos = 4;
	int cor = 2;
	ft_printf("123 %c %c %c %c %c", 'P', 'R', 'I', 'N', 'T');
	ft_printf("\n");
	ft_printf("%s", "SECOND BASE\n");
	ft_printf("%p\n", n);
	ft_printf("GER %d - %d BRA\n", alemanha, brazil);
	ft_printf("SAN %i - %i COR\n", santos, cor);
	ft_printf("%%UNSIGNED INT %u\n", -1);
	ft_printf("UNSIGNED TO HEXA: %x\n", 1233454523);
}

//'C', 'A', 'R', 'A', 'L', 'H', 'O'
