/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:43:13 by tfedoren          #+#    #+#             */
/*   Updated: 2023/02/04 13:43:13 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _point(0)
{
}

Fixed::Fixed(const Fixed & base)
{
    this->setRawBits(base.getRawBits());
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(const Fixed &base)
{
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
    this->_point = (i << Fixed::_bits);
}

Fixed::Fixed(const float f)
{
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

/****************************************************************/

bool Fixed::operator>(Fixed const &f) const
{
    if(this->_point > f.getRawBits())
        return(true);
    return(false);
}

bool Fixed::operator<(Fixed const &f) const
{
    if(this->_point < f.getRawBits())
        return(true);
    return(false);
}

bool Fixed::operator>=(Fixed const &f) const
{
    if(this->_point >= f.getRawBits())
        return(true);
    return(false);
}

bool Fixed::operator<=(Fixed const &f) const
{
    if(this->_point <= f.getRawBits())
        return(true);
    return(false);
}

bool Fixed::operator==(Fixed const &f) const
{
    if(this->_point == f.getRawBits())
        return(true);
    return(false);
}

bool Fixed::operator!=(Fixed const &f) const
{
    if(this->_point != f.getRawBits())
        return(true);
    return(false);
}

Fixed Fixed::operator+(Fixed const &f)
{
    this->_point += f.getRawBits();
    return(*this);
}

Fixed Fixed::operator-(Fixed const &f)
{
    this->_point -= f.getRawBits();
    return(*this);
}

Fixed Fixed::operator*(Fixed const &f)
{
    this->_point = (this->toFloat() * f.toFloat()) * (1 << _bits);
    return(*this);
}

Fixed Fixed::operator/(Fixed const &f)
{
    this->_point = (this->toFloat() / f.toFloat()) * (1 << _bits);
    return(*this);
}

Fixed Fixed::operator++()
{
    this->_point++;
    return(*this);
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    ++(*this);
    return(temp);
}

Fixed Fixed::operator--()
{
    this->_point--;
    return(*this);
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    --(*this);
    return(temp);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
    if(a.getRawBits() > b.getRawBits())
        return(b);
    return(a);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
    if(a.getRawBits() < b.getRawBits())
        return(b);
    return(a);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if(a.getRawBits() > b.getRawBits())
        return(b);
    return(a);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if(a.getRawBits() < b.getRawBits())
        return(b);
    return(a);
}
