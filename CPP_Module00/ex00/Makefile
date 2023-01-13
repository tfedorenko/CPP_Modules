# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 15:00:05 by tfedoren          #+#    #+#              #
#    Updated: 2023/01/11 15:50:00 by tfedoren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC = g++
CFLAGS =  -Wall -Werror -Wextra -std=c++98

SRCS = megaphone.cpp

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
		rm -f $(NAME)

fclean: clean

re: fclean all