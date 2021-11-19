/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_hex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:39:48 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/19 15:10:11 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printnbr_hex(void *input, char specifier)
{
	char	*nbr;
	int		len;

	nbr = NULL;
	if (specifier == 'x')
		nbr = ft_itoa_hex((unsigned int)input, "0123456789abcdef");
	else if (specifier == 'X')
		nbr = ft_itoa_hex((unsigned int)input, "0123456789ABCDEF");
	ft_putstr_fd(nbr, 1);
	len = ft_nblen_hex((unsigned int)input, 16);
	free(nbr);
	return (len);
}
