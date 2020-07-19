/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 19:20:09 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/19 21:48:37 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): _xp(0),  _type(type)
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria &c)
{
	*this = c;
}

AMateria &AMateria::operator=(const AMateria &c)
{
	this->_type = c._type;
	this->_xp = c._xp;
	return *this;
}

std::string const &AMateria::getType() const
{
	return _type;
}

unsigned int AMateria::getXP() const
{
	return _xp;
}
	
void AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
}