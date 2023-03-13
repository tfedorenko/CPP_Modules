# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/12 21:04:44 by tfedoren          #+#    #+#              #
#    Updated: 2023/03/13 21:29:10 by tfedoren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main
CC = c++
CFLAGS =  -Wall -Werror -Wextra -std=c++98 -pedantic

SRCS = Form.cpp Bureaucrat.cpp main.cpp 

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) -o $(NAME) $(SRCS) 

clean:
		rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean ree
