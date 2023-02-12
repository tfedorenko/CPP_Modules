/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 22:45:17 by tfedoren          #+#    #+#             */
/*   Updated: 2023/01/30 22:45:17 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): point(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed & base)
{
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(base.getRawBits());
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &base)
{
    std::cout << "Assignation operator called" << std::endl;
    this->setRawBits(base.getRawBits());
    return (*this);
}

int Fixed::getRawBits()const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(point);
}

void Fixed::setRawBits(int const raw)
{
    this->point = raw;
}
