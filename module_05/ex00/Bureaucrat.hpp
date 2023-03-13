/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:28:44 by tfedoren          #+#    #+#             */
/*   Updated: 2023/03/12 19:28:44 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <stdexcept>

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
