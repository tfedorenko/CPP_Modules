/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:57:33 by tfedoren          #+#    #+#             */
/*   Updated: 2023/02/04 13:57:33 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
    public:

        Point();
        Point(const float x, const float y);
        Point(const Point &copy);
        Point &operator=(Point &src);
        ~Point();

        Fixed getX() const;
        Fixed getY() const;

        

    private:
        Fixed _x;
        Fixed _y;
};
