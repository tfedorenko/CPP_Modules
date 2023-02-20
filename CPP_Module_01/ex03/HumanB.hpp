/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:15:27 by tfedoren          #+#    #+#             */
/*   Updated: 2023/01/19 16:16:16 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include <string>
# include "Weapon.h"

class HumanB
{
    private:
        Weapon *weapon_;
        std::string name_;
    public:
        // HumanB();
        HumanB(std::string name);
        ~HumanB();
        
        void attack();
        void setWeapon(Weapon *weapon);
        
    
};
#endif
