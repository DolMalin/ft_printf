/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:35:48 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/13 13:56:41 by pdal-mol         ###   ########.fr       */
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
int		print_param(va_list params_info, int param_type);
int		ft_strlen_specifierless(const char *str);
int		ft_printchar(char c);
int		ft_printstr(const char *str);
int		ft_printnbr(int nb);
int		ft_printunbr(unsigned int nb);
int		ft_printnbr_hex(void *input, char specifier);
int		ft_nblen(unsigned long long nb, int base_len);
char	*ft_llutoa_hex(unsigned long long nb, char *base);
char	*ft_strreverse(char *str);
int		ft_printaddress(void *input);
#endif