/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nblen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:13:12 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/12 12:05:51 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_nblen(unsigned long long nb)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (nb < 0)
	{
		count++;
		nb *= (-1);
	}
	count++;
	while (nb > 9)
	{
		nb /= 10;
		count++;
	}
	return (count + 1);
}
