/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:55:37 by tfedoren          #+#    #+#             */
/*   Updated: 2023/01/13 15:00:28 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <string>
#include <sstream>
#include <iostream>


int main(int argc, char **argv)
{
	Phonebook Pbook;
	std::string line;
	
	(void)argv;
	if (argc != 1)
	{
		std::cout << "Please run ./Phonebook without arguments" << std::endl;
		return (0);
	}
	std::cout <<"Please, enter ADD, SEARCH or EXIT" << std::endl;
	while(getline(std::cin, line))
	{
		if(!line.compare("EXIT"))
			break ;
		else if(!line.compare("ADD"))
			Pbook.add_new_contact();
		else if(!line.compare("SEARCH"))
			Pbook.search_contact();
		std::cout <<"Please,enter ADD, SEARCH or EXIT" << std::endl;
	}
}
