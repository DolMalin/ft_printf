/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nblen_hexull.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:05:53 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/19 15:09:29 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_nblen_hexull(unsigned long nb, int base_len)
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
	while (nb >= (unsigned long)base_len)
	{
		nb /= base_len;
		count++;
	}
	return (count);
}
