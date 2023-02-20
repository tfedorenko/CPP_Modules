# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 17:12:55 by tfedoren          #+#    #+#              #
#    Updated: 2023/01/18 17:13:50 by tfedoren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = unnecessary_violence
CC = g++
CFLAGS =  -Wall -Werror -Wextra -std=c++98 -pedantic

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
		rm -f $(NAME)

fclean: clean

re: fclean all