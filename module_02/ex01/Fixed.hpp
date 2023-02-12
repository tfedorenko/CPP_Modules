/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 10:43:05 by tfedoren          #+#    #+#             */
/*   Updated: 2023/01/31 10:43:05 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed();
        Fixed(const Fixed &base);
        Fixed(const int i);
        Fixed(const float f);
        ~Fixed();
        Fixed &operator=(const Fixed &base);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat()const;
        int toInt()const;
    private:
        int _point;
        const static int _bits = 8;
};

std::ostream &operator<<(std::ostream &stream, Fixed const &fl);