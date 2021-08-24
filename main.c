/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 20:20:22 by jofelipe          #+#    #+#             */
/*   Updated: 2021/08/23 23:10:00 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int		n;
	int		brazil = 1;
	int		alemanha = 7;
	int		whilezera = 5;
	int		welton = 2;
	char	*str1 = "while monstro";
	char	*str2 = "wut";
	unsigned long i = (unsigned long)&n;
	unsigned long long j = (unsigned long long)&n;

	setbuf(stdout, NULL);
	// ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	// ft_printf(" %% %%%s%% ", str2);
	// printf(" %% %%%s%% ", str2);
	// ft_printf("\n");
	// ft_printf("123 %c %c %c %c %c", 'P', 'R', 'I', 'N', 'T');
	// ft_printf("\n");
	// ft_printf("%s", "SECOND BASE\n");
	// // printf("%s", "SECOND BASE\n");
	// ft_printf("Void Pointer: %p\n", NULL);
	// // printf("Void Pointer: %p\n", NULL);
	// ft_printf("WHILE %d - %d WELTON\n", alemanha, brazil);
	// // printf("WHILE %d - %d WELTON\n", alemanha, brazil);
	// ft_printf("SAN %i - %i COR\n", whilezera, welton);
	// // printf("SAN %i - %i COR\n", whilezera, welton);
	// ft_printf("%%UNSIGNED INT %u\n", 2147483647);
	// // printf("%%UNSIGNED INT %u\n", 2147483647);
	// ft_printf("UNSIGNED TO HEXA: %x\n", 1233454523);
	// // printf("UNSIGNED TO HEXA: %x\n", 1233454523);
	// ft_printf("UNSIGNED TO HEXA: %X\n", 1233454523);
	// printf("UNSIGNED TO HEXA: %X\n", 1233454523);
	printf("% +d\n", 123123);
	ft_printf("% +d\n", 123123);
	printf("%      d\n", 123123);
	ft_printf("%     d\n", 123123);
	printf("%#x\n", 0);
	ft_printf("%#x\n", 0);
	printf("%#X\n", 0);
	ft_printf("%#X\n", 0);

	printf(" %s\n", "");
	ft_printf(" %s\n", "");

	// printf("|%s |", "");
	// ft_printf("|%s |", "");

	printf("%x\n", -2147483648);
	ft_printf("%x\n", -2147483648);


	// printf("%x", )
}

//'C', 'A', 'R', 'A', 'L', 'H', 'O'
