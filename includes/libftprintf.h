/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:35:48 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/11 18:20:10 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_H
# define LIBFT_PRINTF_H

/* =============== INCLUDES ================ */
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "../libft/libft.h"
/* =============== PROTOTYPES ================ */
int		ft_printf(const char *format, ...);
void	print_param(va_list params_info, int param_type);
int		ft_nblen(unsigned long long nb);
char	*ft_llutoa_hex(unsigned long long nb, char *base);
char	*ft_strreverse(char *str);
void	ft_putaddress(void *input);
#endif