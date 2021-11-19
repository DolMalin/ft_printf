/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nblen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:50:55 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/19 15:09:38 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_nblen(int nb, int base_len)
{
	int			i;
	int			count;
	long int	nbr;

	i = 0;
	count = 0;
	nbr = nb;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	count++;
	while (nbr >= base_len)
	{
		nbr /= base_len;
		count++;
	}
	return (count);
}
