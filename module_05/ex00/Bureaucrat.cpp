/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:48:46 by tfedoren          #+#    #+#             */
/*   Updated: 2023/03/12 19:48:46 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat :)"), grade(50){
    std::cout << "Bureaucrat Default Constructor called!" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy){
    std::cout << "Bureaucrat Copy Constructor called!" << std::endl;
    *this = copy;
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Bureaucrat Default Destructor called!" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat&copy){
    this->grade = copy.getGrade();
    this->name = copy.getName();
    return *(this);
}

const char *Bureaucrat::GradeTooHightException::what(void) const throw(){
    return("Grade is too hight!");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw(){
    return("Grade is too low!");
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name (name){
    if (grade < 1){
        throw Bureaucrat::GradeTooHightException();
    }
    else if (grade > 150){
        throw Bureaucrat::GradeTooLowException();
    }
    else{
        this->grade = grade;
    }
    std::cout << "Bureaucrat Parameter Constructor called!" << std::endl;
}

std::string Bureaucrat::getName() const{
    return (this->name);
}

int Bureaucrat::getGrade() const{
    return (this->grade);
}

void Bureaucrat::increaseGrade(){
    if (this->grade - 1 < 1){
        throw Bureaucrat::GradeTooHightException();
    }
    grade--;
}

void Bureaucrat::decreseGrade (){
    if (this->grade + 1 > 150){
        throw Bureaucrat::GradeTooLowException();
    }
    grade++;
}

std::ostream& operator<<(std::ostream &stream, const Bureaucrat& f){
    stream<<f.getName() << ", bureaucrat grade " << f.getGrade();
    return stream;
}
