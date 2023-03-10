/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:31:55 by tfedoren          #+#    #+#             */
/*   Updated: 2023/01/13 15:01:23 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact 
{
	private:
	std::string first_name_;
	std::string last_name_;
	std::string nickname_;
	std::string phone_number_;
	std::string darkest_secret_;
	int index;
	
	public:
	Contact();
	~Contact();
	void display_contact_line_by_line();
	void display_contact();
	void get_input(int index);
	int get_index();
	std::string get_first_name();
	std::string get_last_name();
	std::string get_nickname();
	std::string get_phone_number();
	std::string get_darkest_secret();
};

#endif
