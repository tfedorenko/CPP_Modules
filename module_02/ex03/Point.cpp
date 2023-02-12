/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:44:22 by tfedoren          #+#    #+#             */
/*   Updated: 2023/02/04 13:44:22 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0)
{
}

Point::Point(const float x, const float y): _x(x), _y(y)
{
}

Fixed Point::getX() const{
    return(_x);
}

Fixed Point::getY() const{
    return(_y);
}

Point::Point(const Point &copy): _x(copy.getX()), _y(copy.getY()) {
}

Point &Point::operator=(Point &src){
    return(src);
}
Point::~Point()
{
}