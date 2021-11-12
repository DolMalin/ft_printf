/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:41:51 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/12 16:45:54 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_hex_fd(void *input, char specifier, int fd)
{
	char	*nbr;

	nbr = NULL;
	if (specifier == 'x')
		nbr = ft_llutoa_hex((unsigned long long)input, "0123456789abcdef");
	else if (specifier == 'X')
		nbr = ft_llutoa_hex((unsigned long long)input, "0123456789ABCDEF");
	ft_putstr_fd(nbr, fd);
	free(nbr);
}
