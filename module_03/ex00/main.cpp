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

#include "ClapTrap.hpp"

int main()
{
    ClapTrap ClapTrap1("Cat");
    ClapTrap ClapTrap2("Dog");

    ClapTrap1.attack("Mouse");
    ClapTrap1.beRepaired(2);
    ClapTrap2.attack("Bird");
    ClapTrap2 = ClapTrap1;
    ClapTrap2.attack("Bird");
    ClapTrap1 = ClapTrap2;
    ClapTrap2.takeDamage(5);
    ClapTrap2.beRepaired(2);

    return 0;
}
