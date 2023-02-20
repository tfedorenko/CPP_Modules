/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:00:02 by tfedoren          #+#    #+#             */
/*   Updated: 2023/01/23 18:23:44 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int main()
{
    Harl harl;

    std::cout << "DEBUG level" << std::endl;
    harl.complain("Debug");
    std::cout << "INFO level" << std::endl;
    harl.complain("Info");
    std::cout << "WARNING level" << std::endl;
    harl.complain("Warning");
    std::cout << "ERROR level" << std::endl;
    harl.complain("Error");
    std::cout << "WHATEVER level" << std::endl;
    harl.complain("Whatever");
}
