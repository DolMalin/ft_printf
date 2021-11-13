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
ft_nblen_hex.c

SRCS_DIR = ./srcs/
SRCS = $(addprefix $(SRCS_DIR),$(FILES))
OBJ = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c	
			gcc $(FLAGS) -c $< -o $(<:.c=.o) -I includes

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