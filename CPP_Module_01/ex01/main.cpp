/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:13:53 by tfedoren          #+#    #+#             */
/*   Updated: 2023/01/18 16:34:06 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main()
{
    Zombie *zombie_horde;
    zombie_horde = zombieHorde(5, "Boris the Zombie");
    for(int i = 0; i<5; i++)
        zombie_horde[i].announce();
    delete [] zombie_horde;
}
