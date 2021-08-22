/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printing1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 04:46:00 by jofelipe          #+#    #+#             */
/*   Updated: 2021/08/22 20:03:20 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	print_string(char *str)
{
	size_t	i;

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
	str = itoa_base(i, "0123456789abcdef", 16);
	if (!*str)
	{
		write(1, "0", 1);
		return (1);
	}
	else
		write(1, str, ft_strlen(str));
	i = ft_strlen(str);
	free(str);
	return (i);
}

int	print_unsigned(unsigned int nbr)
{
	char	*str;
	int		i;

	str = ft_unsigned_itoa(nbr);
	i = ft_strlen(str);
	write(1, str, i);
	free(str);
	return (i);
}

int	print_hex(unsigned int nbr, int unsigflag)
{
	char			*str;
	unsigned long	i;

	i = -1;
	str = itoa_base((unsigned long)nbr, "0123456789abcdef", 16);
	if (unsigflag == 1)
		while (str[++i])
			str[i] = ft_toupper(str[i]);
	write(1, &str[2], ft_strlen(str) - 2);
	i = ft_strlen(str) - 2;
	free(str);
	return (i);
}

// int	print_hex(unsigned int nbr, int unsigflag)
// {
// 	char			*str;
// 	unsigned long	i;

// 	i = -1;
// 	str = itoa_base((unsigned long)nbr, "0123456789abcdef", 16);
// 	if (unsigflag == 1)
// 		while (str[++i])
// 			str[i] = ft_toupper(str[i]);
// 	// if (!*str)
// 	// {
// 	// 	write(1, "0", 1);
// 	// 	free(str);
// 	// 	return (1);
// 	// }
// 	// else
// 	write(1, &str[2], ft_strlen(str) - 2);
// 	i = ft_strlen(str) - 2;
// 	free(str);
// 	return (i);
// }

int	print_nbr(int nbr)
{
	char	*str;
	int		i;

	str = ft_itoa(nbr);
	i = ft_strlen(str);
	write(1, str, i);
	free (str);
	return (i);
}
