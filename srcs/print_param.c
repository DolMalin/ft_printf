/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_param.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:40:00 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/12 16:41:02 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	print_param(va_list params_info, int param_type)
{
	if (param_type == 'c')
		ft_putchar_fd((char)va_arg(params_info, int), 1);
	if (param_type == 's')
		ft_putstr_fd((const char *)va_arg(params_info, const char *), 1);
	if (param_type == 'p')
		ft_putaddress((void *)va_arg(params_info, void *));
	if (param_type == 'd')
		ft_putnbr_fd((int)va_arg(params_info, int), 1);
	if (param_type == 'u')
		ft_putunbr_fd((unsigned int)va_arg(params_info, unsigned int), 1);
	if (param_type == 'x' || param_type == 'X')
		ft_putnbr_hex_fd((void *)va_arg(params_info, void *), param_type, 1);
	if (param_type == '%')
		ft_putchar_fd('%', 1);
}
