/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 01:23:32 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/14 12:34:52 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh ..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &c): Enemy(c)
{
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &c)
{
	this->_hp = c._hp;
	this->_type = c._type;
	return (*this);
}

void SuperMutant::takeDamage(int damage)
{
    Enemy::takeDamage(damage - 3);
}