#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"
#include "libft.h"

/*
if there is a char, put it until %
evaluate if next char is a flag [1]
store the value after %
pull the next arg
send the arg for formatting
put the pulled argument casted as the corresponding %
*/
int ft_printf(const char *s, ...)
{
	ft_putstr_fd((char *)s, 1);
	return (0);
}

int	main(void)
{
	char str[] = "hello\n";
	ft_printf("%d\n");
	printf("%p\n", str);
}
