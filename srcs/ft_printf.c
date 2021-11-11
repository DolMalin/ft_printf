/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:38:35 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/11 18:04:51 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list	params_info;
	size_t	i;

	i = 0;
	va_start(params_info, format);
	while (format[i])
	{
		if (format[i] == '%')
			print_param(params_info, format[i++ + 1]);
		else
			ft_putchar(format[i]);
		i++;
	}
	va_end(params_info);
	return (i);
}
