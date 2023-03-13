/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:07:37 by tfedoren          #+#    #+#             */
/*   Updated: 2023/03/12 20:07:37 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
    Bureaucrat Bob("Bob", 1);
    try{
        Bob.increaseGrade();
    }
    catch(std::exception &e){
        std::cout <<e.what() << std::endl;
    }
    std::cout << Bob << std::endl;

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
