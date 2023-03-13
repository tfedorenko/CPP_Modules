/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:07:37 by tfedoren          #+#    #+#             */
/*   Updated: 2023/03/13 21:36:40 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
    
    try{
        Bureaucrat Bob("Bob", 12334);
        Bob.increaseGrade();
        std::cout << Bob << std::endl;
    }
    catch(std::exception &e){
        std::cout <<e.what() << std::endl;
    }
    

    Bureaucrat OOOO("OOOO", 149);
    try{
        OOOO.decreseGrade();
    }
    catch(std::exception &e){
        std::cout <<e.what() << std::endl;
    }
    std::cout << OOOO << std::endl;

    Bureaucrat UUU("UUU", 150);
    try{
        UUU.decreseGrade();
    }
    catch(std::exception &e){
        std::cout <<e.what() << std::endl;
    }
    std::cout << UUU << std::endl;
}
