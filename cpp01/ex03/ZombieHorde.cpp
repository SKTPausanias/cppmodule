/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 12:34:25 by mlaplana          #+#    #+#             */
/*   Updated: 2020/03/09 12:34:28 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

const std::string names[] = {
	"Pedro", "Santiago", "Juan", "Andrés",
	"Bartolomé", "Mateo", "Felipe", "Tomás"
};

ZombieHorde::ZombieHorde(int n):
	_n(n)
{
	_zombies = new Zombie[n];
	int i = 0;
	srand(time(NULL));
	while (i < n)
	{
		_zombies[i] = Zombie(names[rand() % 8], "apostol");
		i++;
	}
}

ZombieHorde::~ZombieHorde()
{
	delete[] _zombies;
}

void ZombieHorde::announce() const
{
	for(int i = 0; i < _n; i++)
		_zombies[i].announce();
}