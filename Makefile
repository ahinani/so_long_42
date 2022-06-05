# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahinani <ahinani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/28 16:44:10 by ahinani           #+#    #+#              #
#    Updated: 2022/04/05 19:49:54 by ahinani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

CC = cc

CFLAGS = -Wall -Wextra -Werror

src = src/src.a

print = ft_printf/ft_printf.a

all: $(NAME) bonus

$(NAME):
	@echo "\033[1;32m"
	@echo "Making src..."
	@cd src; make
	@echo "Making printf..."
	@cd ft_printf; make
	@echo "Making The Game. Done!"
	@$(CC) $(CFLAGS) so_long.c $(src) $(print) -lmlx -framework OpenGL -framework Appkit -o so_long

bonus:
	@echo "\033[1;32m"
	@echo "Making src..."
	@cd src; make
	@echo "Making printf..."
	@cd ft_printf; make
	@echo "Making The Game. Done!"
	@$(CC) $(CFLAGS) so_long_bonus.c $(src) $(print) -lmlx -framework OpenGL -framework Appkit -o so_long_bonus

clean:
	@echo "\033[0;31m"
	@echo "Removing Files..."
	@cd src; make clean
	@cd ft_printf; make clean
	@rm -rf so_long
	@rm -rf so_long_bonus

fclean:
	@echo "\033[0;31m"
	@echo "Removing Files..."
	@cd src; make fclean
	@cd ft_printf; make fclean
	@rm -rf so_long
	@rm -rf so_long_bonus

re: fclean all