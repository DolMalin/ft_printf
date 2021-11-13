/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:41:46 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/13 13:25:31 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printaddress(void *input)
{
	char	*address;
	int		len;

	len = 0;
	address = ft_llutoa_hex((unsigned long long)input, "0123456789abcdef");
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(address, 1);
	len = ft_strlen(address) + 2;
	free(address);
	return (len);
}
