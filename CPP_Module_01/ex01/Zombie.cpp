/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:14:03 by tfedoren          #+#    #+#             */
/*   Updated: 2023/01/18 16:35:14 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie(std::string name)
{
    this->name_ = name;
}

Zombie::Zombie()
{
    name_ = "";
}

Zombie::~Zombie()
{
    std::cout << this->name_<<": destroyed!" <<std::endl;
}

void Zombie::announce()
{
    std::cout<<name_<< ": BraiiiiiiinnnzzzZ..." <<std::endl;
}

void Zombie::set_zombie_name(std::string name)
{
    this->name_ = name;
}
