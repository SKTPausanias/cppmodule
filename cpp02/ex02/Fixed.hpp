/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 16:21:25 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/07 18:54:18 by mlaplana         ###   ########.fr       */
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
        
        bool operator>(const Fixed &c) const;
        bool operator<(const Fixed &c) const;
        bool operator>=(const Fixed &c) const;
        bool operator<=(const Fixed &c) const;
        bool operator==(const Fixed &c) const;
        bool operator!=(const Fixed &c) const;

        Fixed operator+(const Fixed &c) const;
        Fixed operator-(const Fixed &c) const;
        Fixed operator*(const Fixed &c) const;
        Fixed operator/(const Fixed &c) const;
        
        Fixed operator++(int);
        Fixed operator++();
        Fixed operator--(int);
        Fixed operator--();

    	static Fixed const &min(Fixed const &val1, Fixed const &val2);
        static Fixed const &max(Fixed const &val1, Fixed const &val2);
        static Fixed &min(Fixed &val1, Fixed &val2);
        static Fixed &max(Fixed &val1, Fixed &val2);

        int getRawBits() const;
        void setRawBits(const int raw);
        int toInt(void) const;
        float toFloat(void) const;
};

std::ostream & operator<<(std::ostream &out, Fixed const &c);
Fixed const &min(Fixed const &val1, Fixed const &val2);
Fixed const &max(Fixed const &val1, Fixed const &val2);
Fixed &min(Fixed &val1, Fixed &val2);
Fixed &max(Fixed &val1, Fixed &val2);

#endif