/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warrior.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 00:51:21 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/14 00:59:42 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warrior.hpp"

Warrior::Warrior(std::string name): Victim(name)
{
    std::cout << "Waaar!" << std::endl;
}

Warrior::~Warrior()
{
    std::cout << "Avenge mee" << std::endl;
}

Warrior::Warrior(const Warrior &c): Victim(c._name)
{
    std::cout << "Waaar!" << std::endl;
    *this = c;
}

Warrior &Warrior::operator=(const Warrior &c)
{
    this->_name = c._name;
    return *this;
}

void Warrior::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a cute little sheep!" << std::endl;
}