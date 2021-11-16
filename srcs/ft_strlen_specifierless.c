/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_specifierless.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:47:04 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/16 11:34:31 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen_specifierless(const char *str)
{
	int	i;
	int	format_count;

	i = 0;
	format_count = ft_strlen(str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
			format_count -= 2;
		if (str[i] == '%' && !str[i + 1])
			format_count -= 1;
		i++;
	}
	return (format_count);
}
