#include "ftprintf.h"

int	main(void)
{
	int	n;
	int brazil = 1;
	int alemanha = 7;
	int whilezera = 5;
	int welton = 2;
	unsigned long i = (unsigned long)&n;
	unsigned long long j = (unsigned long long)&n;

	setbuf(stdout, NULL);
	//printf("Int addrs of N: %ld\n", i);
	char *str1 = "while monstro";
	char *str2 = "wut";
	ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	ft_printf(" %% %%%s%% ", str2);
	//printf(" %% %%%s%% ", str2);
	ft_printf("\n");
	ft_printf("123 %c %c %c %c %c", 'P', 'R', 'I', 'N', 'T');
	ft_printf("\n");
	ft_printf("%s", "SECOND BASE\n");
	printf("%s", "SECOND BASE\n");
	n = ft_printf("Void Pointer: %p\n", &n);
	n = printf("Void Pointer: %p\n", &n);
	ft_printf("WHILE %d - %d WELTON\n", alemanha, brazil);
	printf("WHILE %d - %d WELTON\n", alemanha, brazil);
	ft_printf("SAN %i - %i COR\n", whilezera, welton);
	printf("SAN %i - %i COR\n", whilezera, welton);
	ft_printf("%%UNSIGNED INT %u\n", 12345);
	printf("%%UNSIGNED INT %u\n", 12345);
	ft_printf("UNSIGNED TO HEXA: %x\n", 1233454523);
	printf("UNSIGNED TO HEXA: %x\n", 1233454523);
	ft_printf("UNSIGNED TO HEXA: %X\n", 1233454523);
	printf("UNSIGNED TO HEXA: %X\n", 1233454523);
}

//'C', 'A', 'R', 'A', 'L', 'H', 'O'
