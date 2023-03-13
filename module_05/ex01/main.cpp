/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:07:37 by tfedoren          #+#    #+#             */
/*   Updated: 2023/03/13 21:39:22 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
    Bureaucrat Bob("Bob", 30);
    Form form("One very important form", 130, 700);
    try{
        Bob.signForm(form);
    }
    catch(std::exception &e){
        std::cout <<e.what() << std::endl;
    }
    std::cout << form << std::endl;

    Bureaucrat Mark("Mark", 140);
    try{
        Mark.signForm(form);;
    }
    catch(std::exception &e){
        std::cout <<e.what() << std::endl;
    }
}
