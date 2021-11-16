/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:33:13 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/16 11:33:14 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

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
int		ft_nblen(int nb, int base_len);
int		ft_nblen_hex(unsigned int nb, int base_len);
char	*ft_llutoa_hex(unsigned long nb, char *base);
char	*ft_itoa_hex(unsigned int nb, char *base);
char	*ft_strreverse(char *str);
int		ft_printaddress(void *input);
int		ft_strlen_specifierless(const char *str);

#endif