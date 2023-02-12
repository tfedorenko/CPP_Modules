/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 10:43:08 by tfedoren          #+#    #+#             */
/*   Updated: 2023/01/31 10:43:08 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _point(0)
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
    return(_point);
}

void Fixed::setRawBits(int const raw)
{
    this->_point = raw;
}

/*************************************************************/

Fixed::Fixed(const int i)
{
    std::cout << "Int constructor called" << std::endl;
    this->_point = (i << Fixed::_bits);
}

Fixed::Fixed(const float f)
{
    std::cout << "Float constructor called" << std::endl;
    this->_point = roundf(f * (1 << Fixed::_bits));
}

float Fixed::toFloat() const
{
    return((float)this->_point / (float)(1 << Fixed::_bits));
}

int Fixed::toInt() const
{
    return(this->_point >> Fixed::_bits);
}

std::ostream &operator<<(std::ostream &stream, Fixed const &fl)
{
    stream << fl.toFloat();
    return(stream);
}
