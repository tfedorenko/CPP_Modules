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

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap DiamondTrap1("Diamond");
   // ScavTrap ScavTrap1("Dog");

    DiamondTrap1.whoAmI();
    DiamondTrap1.attack("Whatever");
    //ClapTrap1.beRepaired(2);
   // ClapTrap2.attack("Bird");
   // ClapTrap2 = ClapTrap1;
  //  ClapTrap2.attack("Bird");
  //  ClapTrap1 = ClapTrap2;
  //  ClapTrap2.takeDamage(5);
   // ClapTrap2.beRepaired(2);

    return 0;
}
