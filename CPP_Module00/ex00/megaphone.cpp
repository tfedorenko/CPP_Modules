/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:16:39 by tfedoren          #+#    #+#             */
/*   Updated: 2023/01/12 14:39:11 by tfedoren         ###   ########.fr       */
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
				if(argv[i][j] >= 'a' && argv[i][j] <= 'z')
					std::cout << (char)(argv[i][j] - 32);
				else
					std::cout << (char)argv[i][j];
				
			}
			if(i < argc - 1)
				std::cout << ' ';
		}
	}
	std::cout  << std::endl;
	return 0;
}