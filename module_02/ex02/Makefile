# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfedoren <tfedoren@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/31 20:59:51 by tfedoren          #+#    #+#              #
#    Updated: 2023/01/31 20:59:51 by tfedoren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed
CC = c++
CFLAGS =  -Wall -Werror -Wextra -std=c++98 -pedantic

SRCS = Fixed.cpp main.cpp

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) -o $(NAME) $(SRCS) 

clean:
		rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
