/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 17:43:17 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/01 19:26:25 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int _fixed_point_value;
    static const int n_fractional_bits = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &f);
    Fixed &operator = (const Fixed& f);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif