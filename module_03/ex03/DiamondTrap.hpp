/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:54:40 by tfedoren          #+#    #+#             */
/*   Updated: 2023/02/06 17:54:40 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
    std::string _name;

    public:

    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap& copy);
    ~DiamondTrap();

    DiamondTrap& operator=(const DiamondTrap& copy);
    void whoAmI();
};
#endif
