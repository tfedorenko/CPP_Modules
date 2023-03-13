/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:28:44 by tfedoren          #+#    #+#             */
/*   Updated: 2023/03/13 21:24:45 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include "Form.hpp"
# include <iostream>
# include <stdexcept>

class Form;
class Bureaucrat
{
    private:
        std::string name;
        int grade;
    
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat& copy);
        Bureaucrat(const std::string name, int grade);
        ~Bureaucrat();

        std::string getName() const;
        int getGrade() const;

        Bureaucrat &operator=(const Bureaucrat& copy);

        void increaseGrade();
        void decreseGrade();
        void  signForm(Form &form);

        class GradeTooHightException : public std::exception{
            public:
                const char* what(void) const throw();
        };
        class GradeTooLowException : public std::exception{
            public:
                const char* what(void) const throw();
        };
};

std::ostream& operator<<(std::ostream &stream, const Bureaucrat& f);


#endif
