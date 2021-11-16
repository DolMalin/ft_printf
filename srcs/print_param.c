/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_param.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 12:44:05 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/16 11:34:45 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_param(va_list params_info, int param_type)
{
	int	count;

	if (param_type == 'c')
		count = ft_printchar((char)va_arg(params_info, int));
	if (param_type == 's')
		count = ft_printstr((const char *)va_arg(params_info, const char *));
	if (param_type == 'p')
		count = ft_printaddress((void *)va_arg(params_info, void *));
	if (param_type == 'd' || param_type == 'i')
		count = ft_printnbr((int)va_arg(params_info, int));
	if (param_type == 'u')
		count = ft_printunbr((unsigned int)va_arg(params_info, unsigned int));
	if (param_type == 'x' || param_type == 'X')
		count = ft_printnbr_hex((void *)va_arg(params_info, void *), param_type);
	if (param_type == '%')
		count = ft_printchar('%');
	return (count);
}
