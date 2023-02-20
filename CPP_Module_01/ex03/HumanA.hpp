/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:15:20 by tfedoren          #+#    #+#             */
/*   Updated: 2023/01/19 16:17:58 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include <string>
# include "Weapon.h"

class HumanA
{
    private:
        Weapon &weapon_;
        std::string name_;
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        
        void attack();
        
    
};
#endif
