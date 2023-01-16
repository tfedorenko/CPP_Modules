# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 19:30:45 by tfedoren          #+#    #+#              #
#    Updated: 2023/01/13 15:02:00 by tfedoren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook
CC = c++
CFLAGS =  -Wall -Werror -Wextra -std=c++98 -pedantic

SRCS = Contact.cpp PhoneBook.cpp main.cpp

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) -o $(NAME) $(SRCS) 

clean:
		rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re