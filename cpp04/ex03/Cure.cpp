/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 19:20:24 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/19 22:29:59 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
}

Cure::~Cure()
{

}

Cure::Cure(const Cure &c): AMateria("cure")
{
	*this = c;
}

Cure &Cure::operator=(const Cure &c)
{
	this->_xp = c._xp;
	return *this;
}

Cure *Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	this->_xp += 10;
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}