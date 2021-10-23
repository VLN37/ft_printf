/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printerf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 04:46:00 by jofelipe          #+#    #+#             */
/*   Updated: 2021/10/22 21:55:40 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_string(char *str)
{
	size_t	i;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	i = ft_strlen(str);
	write(1, str, i);
	return (i);
}

int	print_ptr_addrs(void *ptr)
{
	char			*str;
	unsigned long	i;

	i = (unsigned long)ptr;
	str = ftex_uitoa_base(i, "0123456789abcdef", 16);
	if (!*str)
	{
		write(1, "0x0", 3);
		return (3);
	}
	else
	{
		write (1, "0x", 2);
		write(1, str, ft_strlen(str));
	}
	i = 0;
	i += ft_strlen(str) + 2;
	free(str);
	return (i);
}

int	print_unsigned(unsigned int nbr)
{
	char	*str;
	int		i;

	str = ftex_uitoa(nbr);
	i = ft_strlen(str);
	write(1, str, i);
	free(str);
	return (i);
}

int	print_nbr(int nbr, t_data *data)
{
	char	*str;
	int		i;

	str = ft_itoa(nbr);
	i = ft_strlen(str);
	if (data->plusflag && nbr >= 0)
	{
		write(1, "+", 1);
		i++;
	}
	else if (data->spaceflag && nbr >= 0)
	{
		write(1, " ", 1);
		i++;
	}
	write(1, str, ft_strlen(str));
	free (str);
	return (i);
}
