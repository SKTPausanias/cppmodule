/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 19:20:09 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/15 20:01:49 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): _type(type), _xp(0)
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