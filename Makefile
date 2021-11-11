# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 16:29:41 by pdal-mol          #+#    #+#              #
#    Updated: 2021/11/11 18:29:53 by pdal-mol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a


SRCS = \
ft_printf.c\
ft_llutoa_hex.c\
ft_putaddress.c\
ft_strreverse.c\
print_param.c

OBJ = $(addprefix srcs/,$(SRCS:.c=.o))
FLAGS = -Wall -Wextra -Werror
INCLUDES = -I includes
LIBFT = libft.a

all: $(NAME)

$(NAME): ${OBJ}
	make -C libft
	cp libft/libft.a ./
	gcc -c $(FLAGS) $(INCLUDES) $(LIBFT) $(addprefix srcs/,$(SRCS))
	ar rc $(NAME) $(OBJ)
	
clean:
	/bin/rm -rf $(OBJ)

fclean: clean
	/bin/rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re