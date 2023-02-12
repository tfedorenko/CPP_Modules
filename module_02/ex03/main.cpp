/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:38:51 by tfedoren          #+#    #+#             */
/*   Updated: 2023/02/04 22:38:51 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main()
{
    Point a(7, 7);
    Point b(11, 1);
    Point c(2, 2);
    Point point(50, 3);

    bsp(a, b, c, point);

    return(0);

}