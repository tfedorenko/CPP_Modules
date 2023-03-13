/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:49:36 by tfedoren          #+#    #+#             */
/*   Updated: 2023/03/12 21:49:36 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string _name;
        bool _signed;
        const int _grade_to_sign;
        const int _grade_to_execute;
    
    public:
        Form();
        ~Form();

        class GradeTooHightException : public std::exception{
            public:
                const char* what(void) const throw();
        };
        class GradeTooLowException : public std::exception{
            public:
                const char* what(void) const throw();
        };

}




#endif