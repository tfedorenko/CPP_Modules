/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:26:54 by tfedoren          #+#    #+#             */
/*   Updated: 2023/01/23 18:46:17 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int main(int argc, char **argv)
{
    Harl harl;
    if(argc != 2)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return(0);
    }
    harl.complain(argv[1]);
}
