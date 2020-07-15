/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 18:26:06 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/15 19:07:48 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	Squad* vlc2 = new Squad();

	std::cout << std::endl;

    std::cout << vlc2->push(new TacticalMarine()) << std::endl;
    std::cout << vlc2->push(new AssaultTerminator()) << std::endl;
    std::cout << vlc2->push(new TacticalMarine()) << std::endl;
    std::cout << vlc2->push(new AssaultTerminator()) << std::endl;

	std::cout << vlc2->getUnit(1) << std::endl;
	std::cout << vlc2->getUnit(2) << std::endl;

	for (int i = 0; i < vlc2->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc2->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}	
	
	delete vlc2;
	return 0;
}