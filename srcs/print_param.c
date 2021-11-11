/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_param.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:40:00 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/11 18:14:38 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	print_param(va_list params_info, int param_type)
{
	if (param_type == 'c')
		ft_putchar((char)va_arg(params_info, int));
	if (param_type == 's')
		ft_putstr((const char *)va_arg(params_info, const char *));
	if (param_type == 'p')
		ft_putaddress((void *)va_arg(params_info, void *));
	if (param_type == 'd')
		ft_putnbr((int)va_arg(params_info, int));
/*	if (c == 'u')
		return (va_arg(params_info, unsigned int));

	if (param_type == 'x' || param_type == 'X')
		ft_putnbr_hex((void *)va_arg(params_info, void *), param_type);
*/
	if (param_type == '%')
		ft_putchar('%');
}
