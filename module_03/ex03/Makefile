# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfedoren <tfedoren@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/05 21:11:50 by tfedoren          #+#    #+#              #
#    Updated: 2023/02/05 21:11:50 by tfedoren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main
CC = c++
CFLAGS =  -Wall -Werror -Wextra -std=c++98 -pedantic

SRCS = DiamondTrap.cpp FragTrap.cpp ScavTrap.cpp ClapTrap.cpp main.cpp

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) -o $(NAME) $(SRCS) 

clean:
		rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re