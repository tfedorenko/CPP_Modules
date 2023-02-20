/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:26:57 by tfedoren          #+#    #+#             */
/*   Updated: 2023/01/23 18:28:28 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>
# include <string>


class Harl
{
    private:
        // std::string type_;
        void debug();
        void info();
        void warning();
        void error();
        
    public:
    void complain(std::string level);
};

#endif
