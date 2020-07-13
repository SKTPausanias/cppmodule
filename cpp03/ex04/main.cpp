/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 20:22:22 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/13 19:06:05 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	
	FragTrap f("CL4P-TP");
	ScavTrap s("CL4P-TP2");

	srand(time(NULL));

	f.meleeAttack("enemy");
	f.rangedAttack("enemy");
	f.takeDamage(24);
	f.beRepaired(50);
	f.takeDamage(42);
	f.beRepaired(50);
	f.vaulthunter_dot_exe("enemy");
	f.vaulthunter_dot_exe("enemy");
	f.vaulthunter_dot_exe("enemy");
	f.vaulthunter_dot_exe("enemy");

	std::cout << std::endl;

	s.meleeAttack("enemy");
	s.rangedAttack("enemy");
	s.takeDamage(24);
	s.beRepaired(50);
	s.takeDamage(42);
	s.beRepaired(50);
	s.challengeNewcomer();
	s.challengeNewcomer();
	s.challengeNewcomer();
	s.challengeNewcomer();

	std::cout << std::endl;

	NinjaTrap ninja("ninja");

    ninja.rangedAttack("enemy");
    ninja.meleeAttack("enemy");
    ninja.takeDamage(42);
    ninja.beRepaired(42);

    ninja.ninjaShoebox(f);
    ninja.ninjaShoebox(s);
    ninja.ninjaShoebox(ninja);

    std::cout << std::endl;

    SuperTrap super("super");

	super.takeDamage(24);
	super.beRepaired(50);
	super.takeDamage(42);
    super.rangedAttack("enemy");
    super.meleeAttack("enemy");
    super.takeDamage(42);
    super.beRepaired(42);

    super.ninjaShoebox(f);
    super.ninjaShoebox(s);
    super.vaulthunter_dot_exe("enemy");
    super.vaulthunter_dot_exe("enemy");

	std::cout << std::endl;

	return 0;
}