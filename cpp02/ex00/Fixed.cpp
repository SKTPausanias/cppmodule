/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 16:21:28 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/07 16:24:10 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
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

Fixed &Fixed::operator=(const Fixed &c)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_fixed_point_value = c.getRawBits();
    return *this;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _fixed_point_value;
}

void Fixed::setRawBits(const int raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    _fixed_point_value = raw;
}