/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:54:36 by tfedoren          #+#    #+#             */
/*   Updated: 2023/02/06 17:54:36 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    this->_name = "Default_DiamondTrap_name";
    this->ClapTrap::_name = _name + "_clap_name";
    this->FragTrap::set_hit_points();
    this->ScavTrap::set_energy_points();
    this->FragTrap::set_attack_damage();
    std::cout << "Default DiamondTrap constructor called" << std::endl; 
}

DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
    this->ClapTrap::_name = _name + "_clap_name";
    this->FragTrap::set_hit_points();
    this->ScavTrap::set_energy_points();
    this->FragTrap::set_attack_damage();
    std::cout << "String DiamondTrap constructor called for "<< _name << std::endl; 
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Default DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name is: " << this->_name << std::endl;
    std::cout << "diamondTrap ClapTrap name is: " << this->ClapTrap::_name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &copy)
{
    this->_name = copy._name;
    this->_hit_points = copy._hit_points;
    this->_energy_points = copy._energy_points;
    this->_attack_damage = copy._attack_damage;
    std::cout << "Equal sign DiamondTrap operator overload called" << std::endl;
    return(*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy._name), FragTrap(copy._name), ScavTrap(copy._name){
    *this = copy;
    std:: cout << "Copy DiamondTrap consructor called" << std::endl;
}
