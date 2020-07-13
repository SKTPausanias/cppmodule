/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 19:23:47 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/13 20:19:01 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name): _name(name)
{
    std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(const Victim &c)
{
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
	*this = c;
}

Victim &Victim::operator=(const Victim &c)
{
	this->_name = c._name;
}

const std::string Victim::getName(void) const
{
	return this->_name;
}

void Victim::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream & operator<<(std::ostream &out, Victim const &c)
{
    out << "I'm " << c.getName() << " and I like otters!" << std::endl;
    return out;
}