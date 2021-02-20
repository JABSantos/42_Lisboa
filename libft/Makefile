# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/16 16:08:51 by josantos          #+#    #+#              #
#    Updated: 2021/02/16 16:44:44 by josantos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h
SRC = ${wildcard ft_*.c}
OBJ = ${SRC:.c=.o}
FLAGS = -Wall -Wextra -Werror

${NAME}: ${OBJ}
	ar -rs ${NAME} ${OBJ}

%.o: %.c 
	gcc ${FLAGS} -c -o $@ $<

all: ${NAME}

clean:
	rm -f ${OBJ}

.PHONY: clean
fclean: clean
	rm -f ${NAME}

re: fclean all