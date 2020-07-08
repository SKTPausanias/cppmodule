/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 16:21:28 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/07 19:14:11 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _fixed_point_value(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &c)
{
    *this = c;
}

Fixed::Fixed(const int num)
{
    this->_fixed_point_value = num << _fractionalBits;
}

Fixed::Fixed(const float point)
{
    this->_fixed_point_value =  roundf(point *(1 << _fractionalBits));
}

Fixed &Fixed::operator=(const Fixed &c)
{
    this->_fixed_point_value = c.getRawBits();
    return *this;
}

int Fixed::getRawBits() const
{
    return this->_fixed_point_value;
}

void Fixed::setRawBits(const int raw)
{
    this->_fixed_point_value = raw;
}

int Fixed::toInt(void) const
{
    return this->_fixed_point_value >> _fractionalBits;
}

float Fixed::toFloat(void) const
{
    return ((float)this->_fixed_point_value / (float)(1 << _fractionalBits)); 
}

std::ostream & operator<<(std::ostream &out, Fixed const &c)
{
    out << c.toFloat();
    return out;
}

bool Fixed::operator>(const Fixed &c) const
{
    return (this->getRawBits() > c.getRawBits());
}

bool Fixed::operator<(const Fixed &c) const
{
    return (this->getRawBits() < c.getRawBits());
}

bool Fixed::operator>=(const Fixed &c) const
{
    return (this->getRawBits() >= c.getRawBits());
}

bool Fixed::operator<=(const Fixed &c) const
{
    return (this->getRawBits() <= c.getRawBits());
}

bool Fixed::operator==(const Fixed &c) const
{
    return (this->getRawBits() == c.getRawBits());
}

bool Fixed::operator!=(const Fixed &c) const
{
    return (this->getRawBits() != c.getRawBits());
}

Fixed Fixed::operator+(const Fixed &c) const
{
    return Fixed(this->getRawBits() + c.getRawBits());
}

Fixed Fixed::operator-(const Fixed &c) const
{
    return Fixed(this->getRawBits() - c.getRawBits());
}

Fixed Fixed::operator*(Fixed const &other) const
{
	Fixed val(*this);
	long tmp1, tmp2;

	tmp1 = ((long)this->getRawBits());
	tmp2 = ((long)other.getRawBits());
	val.setRawBits((tmp1 * tmp2) / (1 << Fixed::_fractionalBits));
	return (val);
}

Fixed Fixed::operator/(Fixed const &other) const
{
	Fixed val(*this);
	long tmp1, tmp2;

	tmp1 = ((long)this->getRawBits());
	tmp2 = ((long)other.getRawBits());
	val.setRawBits((tmp1 * (1 << Fixed::_fractionalBits)) / tmp2);
	return (val);
}

Fixed Fixed::operator++()
{
    this->_fixed_point_value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->_fixed_point_value++;
    return tmp;
}

Fixed Fixed::operator--()
{
    this->_fixed_point_value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->_fixed_point_value--;
    return tmp;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed const &min(Fixed const &a, Fixed const &b)
{
	return (Fixed::min(a, b));
}

Fixed &min(Fixed &a, Fixed &b)
{
	return (Fixed::min(a, b));
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed const &max(Fixed const &a, Fixed const &b)
{
	return (Fixed::max(a, b));
}

Fixed &max(Fixed &a, Fixed &b)
{
	return (Fixed::max(a, b));
}
