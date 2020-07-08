/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 16:21:28 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/07 17:47:40 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _fixed_point_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &c)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = c;
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixed_point_value = num << _fractionalBits;
}

Fixed::Fixed(const float point)
{
   std::cout << "Float constructor called" << std::endl; 
    this->_fixed_point_value =  roundf(point *(1 << _fractionalBits));
}

Fixed &Fixed::operator=(const Fixed &c)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_fixed_point_value = c.getRawBits();
    return *this;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixed_point_value;
}

void Fixed::setRawBits(const int raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixed_point_value = raw;
}

int Fixed::toInt(void) const
{
    return this->_fixed_point_value >> _fractionalBits;
}

float Fixed::toFloat(void) const
{
    return (float)this->_fixed_point_value / (float)(1 << _fractionalBits); 
}

std::ostream & operator<<(std::ostream &out, Fixed const &c)
{
    out << c.toFloat();
    return out;
}



