/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 14:30:16 by mlaplana          #+#    #+#             */
/*   Updated: 2020/03/08 14:30:18 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	Zombie z1("loco", "miguel");
	z1.announce();

	ZombieEvent new_zevent("zaragocista");
	new_zevent.setZombieType("Zaragocista de corazón");
	Zombie *zb = new_zevent.newZombie("Manuel");
	zb->announce();
	delete zb;

	srand(time(NULL));
	new_zevent.randomChump();
}