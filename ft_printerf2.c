/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printerf2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 09:48:33 by jofelipe          #+#    #+#             */
/*   Updated: 2021/10/22 21:56:45 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hash_flag_handler(char *str, t_data *data)
{
	int	i;

	i = -1;
	if (data->type == 'X')
	{
		write(1, "0X", 2);
		while (str[++i])
			str[i] = ft_toupper(str[i]);
	}
	else
		write(1, "0x", 2);
	write(1, str, ft_strlen(str));
	i = ft_strlen(str) + 2;
	free(str);
	return (i);
}

static int	no_hash_flag(char *str, t_data *data)
{
	int	i;

	i = -1;
	if (data->type == 'X')
		while (str[++i])
			str[i] = ft_toupper(str[i]);
	write(1, str, ft_strlen(str));
	i = ft_strlen(str);
	free(str);
	return (i);
}

int	print_unsigned_hex(unsigned int nbr, t_data *data)
{
	char			*str;
	unsigned long	i;

	i = -1;
	str = ftex_uitoa_base((unsigned long)nbr, "0123456789abcdef", 16);
	if (data->hashflag && nbr != 0)
		i = hash_flag_handler(str, data);
	else
		i = no_hash_flag(str, data);
	return (i);
}
