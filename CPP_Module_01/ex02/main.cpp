/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:47:56 by tfedoren          #+#    #+#             */
/*   Updated: 2023/01/18 17:09:40 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <iostream>
# include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;
    
    std::cout << " " << std::endl;
    std::cout << "The memory address of the string variable = " << &str << std::endl;
    std::cout << "The memory address held by stringPTR      = " << ptr << std::endl;
    std::cout << "The memory address held by stringREF      = " << &ref << std::endl;
    std::cout << " " << std::endl;
     
    std::cout << "The value of the string variable  = " << str << std::endl;
    std::cout << "The value pointed to by stringPTR = " << *ptr << std::endl;
    std::cout << "The value pointed to by stringREF = " << ref << std::endl;
    std::cout << " " << std::endl;
}
