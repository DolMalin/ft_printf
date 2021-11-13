/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:38:35 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/13 17:10:06 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	ft_printf(const char *format, ...)
{
	va_list	params_info;
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	va_start(params_info, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
			len += print_param(params_info, format[i++ + 1]);
		else
			len	+= ft_printchar(format[i]);
		i++;
	}
	va_end(params_info);
	return (len);
}
