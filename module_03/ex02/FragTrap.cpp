/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:30:43 by tfedoren          #+#    #+#             */
/*   Updated: 2023/02/05 21:30:43 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default name"){
    //_name = "Default name";
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
    std::cout << "Default FragTrap constructor called" << std::endl; 
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    //_name = name;
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
    std::cout << "String FragTrap constructor called for "<< _name << std::endl; 
}

FragTrap::~FragTrap(){
    std::cout << "Default FragTrap destructor called for " << _name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &copy)
{
    _name = copy._name;
    _hit_points = copy._hit_points;
    _energy_points = copy._energy_points;
    _attack_damage = copy._attack_damage;
    std::cout << "Equal sign FragTrap operator overload called" << std::endl;
    return(*this);
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy._name){
    *this = copy;
    std:: cout << "Copy FragTrap consructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << _name << " requests high fives!" << std::endl;
}
