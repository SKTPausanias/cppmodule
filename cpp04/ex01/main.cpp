/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 01:23:10 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/14 18:15:27 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	std::cout << std::endl;

	Character loco("loco");
	std::cout << loco;
	Enemy *malvado = new SuperMutant();
	loco.equip(pr);
	std::cout << loco;
	loco.equip(pf);
	loco.attack(malvado);
	std::cout << loco;
	loco.equip(pr);
	loco.attack(malvado);
	std::cout << loco;
	loco.attack(malvado);
	std::cout << loco;
	loco.attack(malvado);
	std::cout << loco;
	loco.attack(malvado);
	std::cout << loco;
	loco.attack(malvado);
	loco.recoverAP();
	std::cout << loco;
	loco.attack(malvado);
	loco.recoverAP();
	std::cout << loco;
	loco.attack(malvado);
	std::cout << loco;
	return 0;
}