/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:41:46 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/11 18:14:05 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_putaddress(void *input)
{
	char	*address;

	address = ft_llutoa_hex((unsigned long long)input, "0123456789abcdef");
	ft_putstr("0x");
	ft_putstr(address);
	free(address);
}
