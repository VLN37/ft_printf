#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft.h"

typedef struct s_data
{
	char			type;
	char			ch;
	int				nbr;
	char			*str;
	void			*hex_ptr;
	unsigned int	unsig;
}t_data;

int	ft_printf(const char *s, ...);
void print_char(char c);

#endif
