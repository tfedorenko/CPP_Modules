/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:20:11 by tfedoren          #+#    #+#             */
/*   Updated: 2023/01/19 14:19:02 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

Weapon::Weapon(std::string type)
{
    type_ = type;
}

Weapon::~Weapon()
{
}
void Weapon::setType(std::string type)
{
    type_ = type;
}

 const std::string &Weapon::getType()
{
    return(type_);
}
