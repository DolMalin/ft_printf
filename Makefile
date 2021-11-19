# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 16:29:41 by pdal-mol          #+#    #+#              #
#    Updated: 2021/11/12 12:32:26l-mol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FILES = \
ft_printf.c\
ft_strlen_specifierless.c\
ft_itoa_hex.c\
ft_llutoa_hex.c\
ft_printchar.c\
ft_printstr.c\
ft_printaddress.c\
ft_printnbr.c\
ft_printunbr.c\
ft_printnbr_hex.c\
ft_strreverse.c\
print_param.c\
ft_nblen.c\
ft_nblen_hex.c\
ft_nblen_hexull.c

LIBFT_FILES = \
ft_isalpha.c\
ft_isdigit.c\
ft_isalnum.c\
ft_isascii.c\
ft_isprint.c\
ft_strlen.c\
ft_memset.c\
ft_bzero.c\
ft_memcpy.c\
ft_memmove.c\
ft_strlcpy.c\
ft_strlcat.c\
ft_toupper.c\
ft_tolower.c\
ft_strchr.c\
ft_strrchr.c\
ft_strncmp.c\
ft_memchr.c\
ft_memcmp.c\
ft_strnstr.c\
ft_atoi.c\
ft_calloc.c\
ft_strdup.c\
ft_substr.c\
ft_strjoin.c\
ft_strtrim.c\
ft_split.c\
ft_itoa.c\
ft_strmapi.c\
ft_striteri.c\
ft_putchar_fd.c\
ft_putstr_fd.c\
ft_putendl_fd.c\
ft_putnbr_fd.c\
ft_putunbr_fd.c

SRCS_DIR = ./srcs/
SRCS = $(addprefix $(SRCS_DIR),$(FILES))
LIBFT_SRC_DIR = $(addprefix ./libft/,$(LIBFT_FILES))
OBJ = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c $(LIBFT_SRC_DIR) ./includes/ft_printf.h ./libft/libft.h
			gcc $(FLAGS) -c $< -o $@

$(NAME):	$(OBJ)
			make -C ./libft
			cp ./libft/libft.a $(NAME)
			ar -rc $(NAME) $(OBJ)

clean:
	make -C ./libft clean
	/bin/rm -rf $(OBJ)

fclean: clean
	/bin/rm -rf libftprintf.a
	/bin/rm -rf libft/libft.a
	/bin/rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re