#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"
#include "libft.h"

// int ft_printf(const char *s, ...)
// {
// 	ft_putstr_fd((char *)s, 1);
// 	return (0);
// }
/*
**qqqqqqqq
**qqqqqq
*/
int	main(void)
{
	 int n = 11;
	// ft_printf("hello\n");
	// printf("%d\n", 071);
	// printf("%d\n", n);

	printf("test hashtag flag\n");
	printf("Prepended octal: %#o%d\n", 15);
	printf("Prepended hexa:%#p\n", &n);

	printf("\n");

	//???????
	//printf("Prepended hexa:%#x\n", (unsigned int *)&n);

	printf("Test space flag\n");
	printf("Adds a space to the strings or positives % s\n", "Hello");
	printf("Adds a space to the strings or positives % d\n", 42);
	printf("Adds a space to the strings or positives % d\n", -42);
	printf("\n");

	printf("test positive flag\n");
	printf("Always add a sign to the strings or positives %+s\n", "");
	printf("Always add a sign to the strings or positives %+d\n", 42);
	printf("Always add a sign to the strings or positives %+d\n", -42);
	printf("\n");

	printf("test positive escaping space\n");
	printf("Always add a sign to the strings or positives % +s\n", "asd");
	printf("Always add a sign to the strings or positives % +d\n", 42);
	printf("Always add a sign to the strings or positives % +d\n", -42);
	printf("\n");

	printf("test minus flag\n");
	printf("Includes space padding on the right %-5s 0\n", "Hello");
	printf("Includes space padding on the right %-5d 0\n", "asdasd");
	printf("Includes space padding on the right %-5d 0\n", -42);
	printf("\n");

	printf("Test 0 flag\n");
	printf("Includes 0 padding on the left %05s\n", "Hello");
	printf("Includes 0 padding on the left %05d\n", 42);
	printf("Includes 0 padding on the left %05d\n", -42);

	//printf("%d", int unsigned)
}
