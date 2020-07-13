/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 19:25:18 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/13 20:41:17 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name): Victim(name)
{
    std::cout << "Some random Peon called " << _name << " just appeared!" << std::endl;
}

Peon::~Peon()
{
	std::cout << "Peon " << _name << " just died for no apparent reason!" << std::endl;
}

Peon::Peon(const Peon &c)
{
	std::cout << "Some random Peon called " << _name << " just appeared!" << std::endl;
	*this = c;
}

Peon &Peon::operator=(const Peon &c)
{
	this->_name = c._name;
}

const std::string Peon::getName(void) const
{
	return this->_name;
}

void Peon::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a cute little sheep!" << std::endl;
}