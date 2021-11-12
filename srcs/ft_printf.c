/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:38:35 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/12 13:45:09 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
			ft_putchar_fd(format[i], 1);
		i++;
	}
	va_end(params_info);
	return (i);
}
