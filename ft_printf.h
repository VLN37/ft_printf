/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 22:01:17 by jofelipe          #+#    #+#             */
/*   Updated: 2021/10/25 23:12:53 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

typedef struct s_data
{
	char			type;
	int				argc;
	int				len;
	char			ch;
	int				nbr;
	char			*str;
	void			*hex_ptr;
	int				offset;
	unsigned int	unsig;
	int				unsigflag;
	int				spaceflag;
	int				plusflag;
	int				hashflag;
}	t_data;

//controller
int		ft_printf(const char *s, ...);
void	init_flags(t_data *data);
char	printf_parser(const char *s, t_data *data);

//printers
int		print_string(char *str);
int		print_ptr_addrs(void *ptr);
int		print_nbr(int nbr, t_data *data);
int		print_unsigned(unsigned int nbr);
int		print_unsigned_hex(unsigned int nbr, t_data *data);

// int		count_args(const char *s);
// char	determine_type(const char *s, t_data *data);
// void	call_conversion(t_data *data);
// int		write_filler(const char *s, t_data *data);

#endif
