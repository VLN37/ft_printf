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
	printf("%s", "SECOND BASE\n");
	ft_printf("Void Pointer: %p\n", &n);
	printf("Void Pointer: %p\n", &n);
	ft_printf("WHILE %d - %d WELTON\n", alemanha, brazil);
	printf("WHILE %d - %d WELTON\n", alemanha, brazil);
	ft_printf("SAN %i - %i COR\n", whilezera, welton);
	printf("SAN %i - %i COR\n", whilezera, welton);
	ft_printf("%%UNSIGNED INT %u\n", 12345);
	printf("%%UNSIGNED INT %u\n", 12345);
	ft_printf("UNSIGNED TO HEXA: %x\n", 1233454523);
	printf("UNSIGNED TO HEXA: %x\n", 1233454523);


}

//'C', 'A', 'R', 'A', 'L', 'H', 'O'
