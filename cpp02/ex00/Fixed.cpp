/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 17:43:12 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/01 19:29:50 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    _fixed_point_value = 0;
    std::cout << "Default Constructor Called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor Called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
    
}
/*Fixed();
~Fixed();
Fixed(const Fixed &f);
Fixed &operator = (const Fixed& f);
int getRawBits( void ) const;
void setRawBits( int const raw );*/