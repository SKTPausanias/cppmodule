/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anias <anias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 14:31:02 by mlaplana          #+#    #+#             */
/*   Updated: 2020/06/29 18:25:40 by anias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

const std::string names[] = {
	"vigaray", "Puado", "luisitoSuarez", "guti"
};

ZombieEvent::ZombieEvent(std::string type)
{
	_type = type;
}

std::string ZombieEvent::get_type() const
{
	return _type;
}

Zombie *ZombieEvent::newZombie(std::string name) const
{
	return new Zombie(_type, name);
}

void ZombieEvent::setZombieType(std::string type)
{
	_type = type;
}

std::string random_name()
{
	return (names[rand() % 4]);
}

void ZombieEvent::randomChump() const
{
	Zombie zombie(_type, random_name());
	zombie.announce();
}