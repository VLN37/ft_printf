#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
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

int		ft_printf(const char *s, ...);
int		print_char(char c);
int		print_string(char *str);
int		print_ptr_addrs(void *ptr);
char	*itoa_base(unsigned long nbr, char *base_to, char *str, int basesize);
char	determine_type(const char *s, t_data *data);
void	call_conversion(t_data *data);
int		count_args(const char *s);
int		write_filler(const char *s, t_data *data);
int		print_string(char *str);
char	*ft_itoa(int nbr);
int		print_nbr(int nbr);
int	print_unsigned(unsigned int nbr);

#endif
