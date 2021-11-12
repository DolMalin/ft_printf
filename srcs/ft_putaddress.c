/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:41:46 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/12 13:45:02 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putaddress(void *input)
{
	char	*address;

	address = ft_llutoa_hex((unsigned long long)input, "0123456789abcdef");
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(address, 1);
	free(address);
}
