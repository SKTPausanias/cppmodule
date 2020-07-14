/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 20:22:22 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/14 19:28:46 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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

	return 0;
}