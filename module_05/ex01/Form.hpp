/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:49:36 by tfedoren          #+#    #+#             */
/*   Updated: 2023/03/13 21:29:41 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"
# include <iostream>

class Bureaucrat;
class Form
{
    private:
        const std::string _name;
        bool _signed;
        const int _grade_to_sign;
        const int _grade_to_execute;
    
    public:
        Form();
        Form(std::string name, int grade_to_sign, int grade_to_execute);
        Form(const Form& copy);
        Form &operator=(const Form &copy);
        ~Form();

        std::string get_name();
        int get_grade_to_sign();
        int get_grade_to_execute();
        bool get_signed();

        void beSigned(Bureaucrat &bureaucrat);
        
        class GradeTooHightException : public std::exception{
            public:
                const char* what(void) const throw();
        };
        class GradeTooLowException : public std::exception{
            public:
                const char* what(void) const throw();
        };

};


std::ostream& operator<<(std::ostream &stream, Form &f);

#endif
