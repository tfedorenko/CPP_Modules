/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 23:02:39 by tfedoren          #+#    #+#             */
/*   Updated: 2023/02/04 23:02:39 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapTrap_name"), _hit_points(10), _energy_points(10), _attack_damage(0){
    std::cout << "Default ClapTrap constructor called for " << _name <<std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0){
    std::cout << "String ClapTrap constructor called for " << _name <<std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "Default ClapTrap destructor called for " << _name <<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy) : _name(copy._name), _hit_points(copy._hit_points), _energy_points(copy._energy_points), _attack_damage(copy._attack_damage){
    std::cout << "Copy ClapTrap constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &copy)
{
    _name = copy._name;
    _hit_points = copy._hit_points;
    _energy_points = copy._energy_points;
    _attack_damage = copy._attack_damage;
    std::cout << "Equal sign ClapTrap operator overload called" << std::endl;
    return(*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (_hit_points <= 0)
    {
        std::cout << _name << " is dead!" << std::endl;
        return ;
    }
    if (_energy_points <= 0)
    {
        std::cout << _name << " does not have enough energy to attack!";
        return ;
    }
    _energy_points -= 1;
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(_hit_points <= 0)
    {
        std::cout << _name << " has already dead and can not loose health points!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " takes " << amount  << " damage!" << std::endl;
    _hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(_hit_points <= 0)
    {
        std::cout << "ClapTrap " << _name << " is dead!"  << std::endl;
        return ;
    }
    if(_energy_points <= 0)
    {
        std::cout << "ClapTrap " << _name << " does not have enough energy points to repair itself!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " Repairs itself for " << amount << " Health points from " << _hit_points << " to " << _hit_points + amount << " Health points!" << std::endl;
    _hit_points +=amount;
    _energy_points -= 1;
}