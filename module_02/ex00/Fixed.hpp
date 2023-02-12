/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 22:40:32 by tfedoren          #+#    #+#             */
/*   Updated: 2023/01/30 22:40:32 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
    public:
        Fixed();
        Fixed(const Fixed &base);
        ~Fixed();
        Fixed &operator=(const Fixed &base);

        int getRawBits(void) const;
        void setRawBits(int const raw);
    private:
        int point;
        const static int bits = 8;
};
