#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"

int	add_numbers(int n, ...)
{
	va_list	ptr;
	int		sum;

	sum = 0;
	va_start(ptr, n);

	while (n--)
		sum += va_arg(ptr, int);
	va_end(ptr);
	return(sum);
}

int	main (void)
{
	printf("%d\n", add_numbers(4, 2, 2, 2, 2, 2));
}
