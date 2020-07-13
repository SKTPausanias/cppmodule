/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 19:22:58 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/13 20:17:30 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title): _name(name), _title(title)
{
    std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &c)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
	*this = c;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &c)
{
	this->_name = c._name;
	this->_title = c._title;
}

const std::string Sorcerer::getName(void) const
{
	return this->_name;
}

const std::string Sorcerer::getTitle(void) const
{
	return this->_title;
}

void Sorcerer::polymorph(Victim const &c) const
{
    c.getPolymorphed();
}

std::ostream & operator<<(std::ostream &out, Sorcerer const &c)
{
    out << "I am " << c.getName() << ", " << c.getTitle() << ", " << "and I like ponies!" << std::endl;
    return out;
}
