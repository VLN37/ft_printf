#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

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
	int				unsigflag;
}t_data;

int		ft_printf(const char *s, ...);

int		ft_toupper(int c);
size_t	ft_strlen(const char *str);

int		print_char(char c);
int		print_string(char *str);
int		print_ptr_addrs(void *ptr);
int		print_string(char *str);
int		print_nbr(int nbr);
int		print_unsigned(unsigned int nbr);
int		print_hex(unsigned int nbr, int unsigflag);

char	*ft_unsigned_itoa(unsigned int nbr);
char	*itoa_base(unsigned long nbr, char *base_to, unsigned long basesize);
char	*ft_itoa(int nbr);

int		count_args(const char *s);
char	determine_type(const char *s, t_data *data);
void	call_conversion(t_data *data);
int		write_filler(const char *s, t_data *data);

#endif
