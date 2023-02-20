/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:27:06 by tfedoren          #+#    #+#             */
/*   Updated: 2023/01/19 16:19:11 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon_(weapon)
{
    name_ = name;
    
}

void HumanA::attack()
{
    std::cout << this->name_ << ": attack with " << this->weapon_.getType() << std::endl;
}

HumanA::~HumanA()
{
}
