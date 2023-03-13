/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:35:36 by tfedoren          #+#    #+#             */
/*   Updated: 2023/03/13 21:37:44 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default_Form"), _signed(false), _grade_to_sign(10), _grade_to_execute(50){
	std::cout << "Form Default Constructor called!" << std::endl;
}

Form::Form(std::string name, int grade_to_sign, int grade_to_execute) : _name(name), _signed(false), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute){
	if(_grade_to_execute < 1 || _grade_to_sign < 1){
		throw Form::GradeTooHightException();
	} else if (_grade_to_execute > 150 || _grade_to_sign > 150){
		throw Form::GradeTooLowException();
	}	
	std::cout << "Form Parameter Constructor called!" << std::endl;
}

Form::Form(const Form &copy) : _name(copy._name), _signed(copy._signed), _grade_to_sign(copy._grade_to_sign), _grade_to_execute(copy._grade_to_execute){
	std::cout << "Form Copy Constructor called!" << std::endl;
	*this = copy;
} 
Form &Form::operator=(const Form &copy){
	this->_signed = copy._signed;
	return *(this);
}

int Form::get_grade_to_execute(){
	return this->_grade_to_execute;
}

int Form::get_grade_to_sign(){
	return this->_grade_to_sign;
}

std::string Form::get_name(){
	return this->_name;
}

bool Form::get_signed(){
	return this->_signed;
}

const char *Form::GradeTooHightException::what(void) const throw(){
	return("Grade is too hight");
}

const char *Form::GradeTooLowException::what(void) const throw(){
	return("Grade is too low");
}

void Form::beSigned(Bureaucrat &bureaucrat){
	if(bureaucrat.getGrade() >= this->_grade_to_sign){
		throw Form::GradeTooLowException();
	} else {
		this->_signed = true;
	}
}

std::ostream& operator<<(std::ostream &stream, Form &f){
	if(f.get_signed()){
		stream << "Bureaucrat with grade to execute " << f.get_grade_to_execute() << " and grade to sigh " << f.get_grade_to_sign() << "  signed the document " << f.get_name() << std::endl;
	} else {
		stream << "Bureaucrat with grade to execute " << f.get_grade_to_execute() << " and grade to sigh " << f.get_grade_to_sign() << " didn't sign the document " << f.get_name() << std::endl;
	}
	return stream;
}

Form::~Form(){
	std::cout << "Form Default Destructor called!" << std::endl;
}
