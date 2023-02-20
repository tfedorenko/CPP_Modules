# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 16:47:29 by tfedoren          #+#    #+#              #
#    Updated: 2023/01/18 16:47:52 by tfedoren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain
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