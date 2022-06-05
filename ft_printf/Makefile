# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahinani <ahinani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 12:58:29 by ahinani           #+#    #+#              #
#    Updated: 2022/02/24 17:14:44 by ahinani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC =	ft_print_hexa.c		\
		ft_print_ptr.c		\
		ft_printf.c			\
		ft_print_percent.c	\
		ft_print_str.c		\
		ft_print_id.c		\
		ft_print_unsigned.c

OBJECTS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o : %.c
	$(CC) $(CFLAGS) -I include -o $@ -c $<

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all