/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nblen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:50:55 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/13 17:42:43 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_nblen(int nb, int base_len)
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
	while (nb >= base_len)
	{
		nb /= base_len;
		count++;
	}
	return (count);
}
