/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_specifierless.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:47:04 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/13 13:58:25 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_strlen_specifierless(const char *str)
{
	size_t	i;
	size_t	format_count;

	i = 0;
	format_count = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
			format_count += 2;
		if (str[i] == '%' && !str[i + 1])
			format_count += 1;
		i++;
	}
	return (i - format_count);
}
