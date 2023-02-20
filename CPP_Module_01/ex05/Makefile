# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/23 15:38:37 by tfedoren          #+#    #+#              #
#    Updated: 2023/01/23 18:27:37 by tfedoren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl
CC = g++
CFLAGS =  -Wall -Werror -Wextra -std=c++98 -pedantic

SRCS = Harl.cpp main.cpp

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
		rm -f $(NAME)

fclean: clean

re: fclean all