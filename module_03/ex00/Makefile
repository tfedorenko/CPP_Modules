# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfedoren <tfedoren@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/04 23:01:55 by tfedoren          #+#    #+#              #
#    Updated: 2023/02/04 23:01:55 by tfedoren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main
CC = c++
CFLAGS =  -Wall -Werror -Wextra -std=c++98 -pedantic

SRCS = ClapTrap.cpp main.cpp

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) -o $(NAME) $(SRCS) 

clean:
		rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re