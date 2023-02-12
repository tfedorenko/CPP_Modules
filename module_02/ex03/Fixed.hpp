/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:43:37 by tfedoren          #+#    #+#             */
/*   Updated: 2023/02/04 13:43:37 by tfedoren         ###   ########.fr       */
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

        bool operator>(Fixed const &f) const;
        bool operator<(Fixed const &f) const;
        bool operator>=(Fixed const &f) const;
        bool operator<=(Fixed const &f) const;
        bool operator==(Fixed const &f) const;
        bool operator!=(Fixed const &f) const;

        Fixed operator+(Fixed const &f);
        Fixed operator-(Fixed const &f);
        Fixed operator*(Fixed const &f);
        Fixed operator/(Fixed const &f);

        Fixed operator++();
        Fixed operator++(int);
        Fixed operator--();
        Fixed operator--(int);     

        static Fixed const &min(Fixed const &a, Fixed const &b);
        static Fixed const &max(Fixed const &a, Fixed const &b);
        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
    private:
        int _point;
        const static int _bits = 8;
};

std::ostream &operator<<(std::ostream &stream, Fixed const &fl);
