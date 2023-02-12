/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 20:36:38 by tfedoren          #+#    #+#             */
/*   Updated: 2023/02/05 20:36:38 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default name"){
    //_name = "Default name";
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "Default ScavTrap constructor called" << std::endl; 
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    //_name = name;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "String ScavTrap constructor called for "<< _name << std::endl; 
}

ScavTrap::~ScavTrap(){
    std::cout << "Default ScavTrap destructor called for " << _name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copy)
{
    _name = copy._name;
    _hit_points = copy._hit_points;
    _energy_points = copy._energy_points;
    _attack_damage = copy._attack_damage;
    std::cout << "Equal sign ScavTrap operator overload called" << std::endl;
    return(*this);
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy._name){
    *this = copy;
    std:: cout << "Copy ScavTrap consructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (_hit_points <= 0)
    {
        std::cout << _name << " is dead! :)))))))))))" << std::endl;
        return ;
    }
    if (_energy_points <= 0)
    {
        std::cout << _name << " does not have enough energy to attack! :)))))))))))))))";
        return ;
    }
    _energy_points -= 1;
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage! :)))))))))))))))" << std::endl;
}

void ScavTrap::guardGate()
{
        if (_hit_points <= 0)
    {
        std::cout << _name << " is dead!" << std::endl;
        return ;
    }
    if (_energy_points <= 0)
    {
        std::cout << _name << " does not have enough energy to Gate keep mode!";
        return ;
    }
    _energy_points -= 1;
    std::cout << "ScavTrap " << _name << " is in Gate keep mode!" << std::endl;
}
