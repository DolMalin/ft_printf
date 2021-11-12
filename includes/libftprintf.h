/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:35:48 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/12 16:41:14 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

/* =============== INCLUDES ================ */
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "../libft/libft.h"

/* =============== PROTOTYPES ================ */
int		ft_printf(const char *format, ...);
void	print_param(va_list params_info, int param_type);
int		ft_nblen(unsigned long long nb, int base_len);
char	*ft_llutoa_hex(unsigned long long nb, char *base);
char	*ft_strreverse(char *str);
void	ft_putaddress(void *input);
void	ft_putnbr_hex_fd(void *input, char specifier, int fd);
#endif