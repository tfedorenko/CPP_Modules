/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:16:39 by tfedoren          #+#    #+#             */
/*   Updated: 2023/01/16 13:25:00 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>

int main (int argc, char **argv)
{
	if (argc == 1)
	{
		std:: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	else 
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; argv[i][j]; j++)
			{
				argv[i][j] = std::toupper(argv[i][j]);
			}
			std::cout << argv[i];
		}
	}
	std::cout  << std::endl;
	return 0;
}
