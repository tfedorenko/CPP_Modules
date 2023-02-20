# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/20 15:21:53 by tfedoren          #+#    #+#              #
#    Updated: 2023/01/20 15:22:27 by tfedoren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main
CC = g++
CFLAGS =  -Wall -Werror -Wextra -std=c++98 -pedantic

SRCS = main.cpp

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
		rm -f $(NAME)

fclean: clean

re: fclean all