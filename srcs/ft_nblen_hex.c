/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nblen_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:43:50 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/16 11:33:27 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nblen_hex(unsigned int nb, int base_len)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (nb < 0)
	{
		count++;
		nb = -nb;
	}
	count++;
	while (nb >= (unsigned int)base_len)
	{
		nb /= base_len;
		count++;
	}
	return (count);
}
