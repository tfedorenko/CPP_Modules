/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:09:40 by tfedoren          #+#    #+#             */
/*   Updated: 2023/02/04 22:09:40 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed scalar_a;
    Fixed scalar_b;
    Fixed scalar_c;
    Fixed denominator;

    denominator = ((b.getY() - c.getY()) * (a.getX() - c.getX())) + ((c.getX() - b.getX()) * (a.getY() - c.getY()));
    scalar_a = (((b.getY() - c.getY()) * (point.getX() - c.getX())) + ((c.getX() - b.getX()) * (point.getY() - c.getY()))) /denominator;
    scalar_b = (((c.getY() - a.getY()) * (point.getX() - c.getX())) + ((a.getX() - c.getX()) * (point.getY() - c.getY()))) /denominator;
    scalar_c = Fixed(1) - scalar_a - scalar_b;

    if (Fixed(0) <= scalar_a && scalar_a <= 1 && Fixed(0) <= scalar_b && scalar_b <= 1 && Fixed(0) <= scalar_c && scalar_c <= 1)
    {
        std::cout << "Point lies inside the triangle :)" << std::endl;
        return true;
    }
    else
    {
        std::cout << "Point does not lie inside the triangle :)" << std::endl;
        return false;
    }
}
