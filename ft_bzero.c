/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 10:05:30 by jofelipe          #+#    #+#             */
/*   Updated: 2021/08/22 04:11:28 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

/**
 * @brief receives an address and fills it with NULL values
 *
 * @param str the starting address
 * @param len the amount of bytes to be written
 */
void	ft_bzero(void *ptr, size_t len)
{
	while (len-- > 0)
		*(char *)ptr++ = 0;
}
