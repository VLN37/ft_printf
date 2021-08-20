#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft.h"

typedef struct s_data
{
	char			type;
	int				argc;
	int				len;
	char			ch;
	char			*str;
	void			*hex_ptr;
	int				nbr;
	unsigned int	unsig;
}t_data;

int	ft_printf(const char *s, ...);
int print_char(char c);
int	print_string(char *str);

#endif
