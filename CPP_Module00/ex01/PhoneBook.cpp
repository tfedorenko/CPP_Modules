/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:30:49 by tfedoren          #+#    #+#             */
/*   Updated: 2023/01/12 18:39:38 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Phonebook::add_new_contact(Contact contact)
{
	if(contact.get_first_name().empty() || contact.get_last_name().empty() || contact.get_nickname().empty() || contact.get_phone_number().empty() || contact.get_darkest_secret().empty())
	{
		std::cout << "Please create a contact and fill oll fields" <<  std::endl;
		return;
	}
	this->contact_arr[this->contact_index_].get_input(this->contact_index_);
	this->contact_index_++;
	if(this->contact_index_ == 7)
		this->contact_index_ = 0;
	std::cout<<"Contact sucsessfully added" <<std::endl;	
}

void Phonebook::search_contact()
{
	std::string line;
	Contact contact;

	std::cout <<"     INDEX|FIRST NAME| LAST NAME|  NICKNAME" << std::endl;
	for (int i = 0; i<8; i++)
	{
		if (contact_arr[i].get_index())
		{
			contact = contact_arr[i];
			contact.display_contact();
		}
	}
	std::cout << "Please, enter Index of contact to display or BACK to go back" << std::endl;
	while(getline(std:: cin, line))
	{
		if(!line.compare("BACK"))
			break ;
		if(line.length() == 1 && std::isdigit(line[0]) && std::stoi(line) > 0 && std::stoi(line) < 9)
		{
			if (contact_arr[std::stoi(line) - 1].get_index())
			{
				contact_arr[std::stoi(line) - 1].display_contact_line_by_line();
				break ;
			}
		}
		std::cout << "Invalid index, please try again or enter BACK to go back";
	}
}
