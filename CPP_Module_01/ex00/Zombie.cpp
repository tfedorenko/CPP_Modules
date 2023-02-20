/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:13:47 by tfedoren          #+#    #+#             */
/*   Updated: 2023/01/18 16:37:16 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    name_ = name;
}

Zombie::~Zombie()
{
    std::cout<< name_ << ": got destroyed!"<<std::endl;
}

void Zombie::announce()
{
    std::cout<<name_<< ": BraiiiiiiinnnzzzZ..." <<std::endl;
}

Zombie::Zombie()
{
    name_ = "";
}
