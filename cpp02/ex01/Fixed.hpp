/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 16:21:25 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/07 16:53:44 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int _fixed_point_value;
        static const int _fractionalBits = 8;

    public:
        Fixed();
        ~Fixed();
        Fixed(const int num);
        Fixed(const float point);
        Fixed(const Fixed &c);
        Fixed &operator=(const Fixed &c);

        int getRawBits() const;
        void setRawBits(const int raw);
        int toInt(void) const;
        float toFloat(void) const;
};

std::ostream & operator<<(std::ostream &out, Fixed const &c);

#endif