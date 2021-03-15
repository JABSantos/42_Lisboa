# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: josantos <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/02 18:21:24 by josantos          #+#    #+#              #
#    Updated: 2021/03/15 11:24:01 by josantos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = libft/libft.a
NAME =  libftprintf.a
HEADER = includes/ft_printf.h
SRCS= ft_printf.c \
	  srcs/case_c.c \
	  srcs/case_capital_x.c \
	  srcs/case_d_i.c \
	  srcs/case_p.c \
	  srcs/case_percentage.c \
	  srcs/case_s.c \
	  srcs/case_u.c \
	  srcs/case_x.c \
	  srcs/get_case.c \
	  srcs/set_params.c \
	  srcs/arg_conversion.c \
	  srcs/handle_width.c \
	  srcs/arg_conversion.c \
	  srcs/handle_numbs.c
OBJS = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror

%.o: %.c
	gcc -c -o $@ $<

$(NAME): ${OBJS}
	${MAKE} -C ./libft
	cp ${LIBFT} ${NAME}
	ar -rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}
	${MAKE} fclean -C ./libft

re: fclean all
