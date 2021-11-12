/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:50:07 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/12 12:05:39 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_strreverse(char *str)
{
	char	buff;
	size_t	i;

	i = 0;
	while (i < ft_strlen(str) / 2)
	{
		buff = str[i];
		str[i] = str[ft_strlen(str) - i - 1];
		str[ft_strlen(str) - i - 1] = buff;
		i++;
	}
	return (str);
}
