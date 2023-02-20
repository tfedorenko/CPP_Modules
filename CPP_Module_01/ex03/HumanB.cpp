/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:37:33 by tfedoren          #+#    #+#             */
/*   Updated: 2023/01/19 16:15:52 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

HumanB::HumanB(std::string name)
{
    name_ = name;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon *weapon)
{
    weapon_ = weapon;
}

void HumanB::attack()
{
    if(weapon_ != NULL)
        std::cout << this->name_ << ": attack with " << this->weapon_->getType() << std::endl;
}
