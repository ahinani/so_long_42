# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahinani <ahinani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/28 17:13:44 by ahinani           #+#    #+#              #
#    Updated: 2022/05/11 21:05:56 by ahinani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = src.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

SRC = 	check_map.c 			\
		count_c.c				\
		count_height.c			\
		count_width.c			\
		create_windows.c		\
		ft_count_move.c			\
		ft_itoa.c				\
		ft_split.c				\
		ft_strwordchr.c			\
		ft_strjoin.c			\
		get_next_line.c			\
		get_next_line_utils.c	\
		get_pos_i.c				\
		get_pos_j.c				\
		put_img_to_window.c		\
		ft_strcmp.c				\
		move.c					\
		keys_handler.c			\
		ft_put_enemy.c			\
		ft_draw_enemy.c			\
		create_windows_bonus.c

CNVT = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(CNVT)
	@$(AR) $(NAME) $^

%.o : %.c 
	@$(CC) $(CFLAGS) -o $@ -c $^

clean:
	@rm -f $(CNVT)

fclean: clean
	@rm -f $(NAME)
re : fclean all