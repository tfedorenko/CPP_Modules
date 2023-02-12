/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 23:02:33 by tfedoren          #+#    #+#             */
/*   Updated: 2023/02/04 23:02:33 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap ScavTrap1("Cat");
   // ScavTrap ScavTrap2("Dog");

    ScavTrap1.attack("Mouse");
    ScavTrap1.guardGate();
    //ClapTrap1.beRepaired(2);
   // ClapTrap2.attack("Bird");
   // ClapTrap2 = ClapTrap1;
  //  ClapTrap2.attack("Bird");
  //  ClapTrap1 = ClapTrap2;
  //  ClapTrap2.takeDamage(5);
   // ClapTrap2.beRepaired(2);

    return 0;
}
