/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 19:20:30 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/17 16:43:19 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
}

Ice::~Ice()
{

}

Ice::Ice(const Ice &c): AMateria("ice")
{
	*this = c;
}

Ice &Ice::operator=(const Ice &c)
{
	this->_xp = c._xp;
	return *this;
}

Ice *Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	this->_xp += 10;
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}