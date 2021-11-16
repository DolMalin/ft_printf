/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llutoa_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:44:21 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/16 11:32:55 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_llutoa_hex(unsigned long nb, char *base)
{
	char	*output;
	size_t	i;

	i = 0;
	output = ft_calloc(sizeof(char), (ft_nblen_hex(nb, 16) + 1));
	if (!output)
		return (0);
	if (nb == 0)
		output[i] = base[nb % 16];
	while (nb > 0)
	{
		output[i] = base[nb % 16];
		nb = nb / 16;
		i++;
	}
	return (ft_strreverse(output));
}
