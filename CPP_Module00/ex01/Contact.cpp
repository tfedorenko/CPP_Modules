/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:30:42 by tfedoren          #+#    #+#             */
/*   Updated: 2023/01/13 15:01:14 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int Contact::get_index()
{
	return (this->index);
}

Contact::Contact() : first_name_(""), last_name_(""), nickname_(""), phone_number_(""), darkest_secret_(""), index(0) 
{
}

Contact::~Contact()
{
}

void Contact::display_contact()
{
	std::cout << std::setfill(' ') << std::setw(10) << index << "|";
	if (first_name_.length() > 10)
	{
		first_name_.resize(9);
		first_name_.append(".");
	}
	std::cout << std::setfill(' ') << std::setw(10) << first_name_ << "|";
	if (last_name_.length() > 10)
	{
		last_name_.resize(9);
		last_name_.append(".");
	}
	std::cout << std::setfill(' ') << std::setw(10) << last_name_ << "|";
	if (nickname_.length() > 10)
	{
		nickname_.resize(9);
		nickname_.append(".");
	}
	std::cout << std::setfill(' ') << std::setw(10) << nickname_;
	std::cout << std::endl;
}

void Contact::display_contact_line_by_line()
{
	std::cout << std::endl;
	std::cout << "First name:\t" << first_name_ << std::endl;
	std::cout << "Last name:\t" << last_name_ << std::endl;
	std::cout << "Nickname:\t" << nickname_ << std::endl;
	std::cout << "Phone number:\t" << phone_number_ << std::endl;
	std::cout << "Darkest secret:\t" << darkest_secret_ << std::endl;
}

std::string Contact::get_first_name()
{
	return this->first_name_ ;
}

std::string Contact::get_last_name()
{
	return this->last_name_ ;
}

std::string Contact::get_nickname()
{
	return this->nickname_ ;
}

std::string Contact::get_phone_number()
{
	return this->phone_number_ ;
}

std::string Contact::get_darkest_secret()
{
	return this->darkest_secret_ ;
}

void Contact::get_input(int index)
{
	Contact contact;
	
	this->index = index + 1;
	std::cout<<"Enter first name:" <<std::endl;
	getline(std::cin, this->first_name_);
	std::cout<<"Enter last name:" <<std::endl;
	getline(std::cin, this->last_name_);
	std::cout<<"Enter nickname:" <<std::endl;
	getline(std::cin, this->nickname_);
	std::cout<<"Enter phone number:" <<std::endl;
	getline(std::cin, this->phone_number_);
	std::cout<<"Enter the darkest secret:" <<std::endl;
	getline(std::cin, this->darkest_secret_);
}
