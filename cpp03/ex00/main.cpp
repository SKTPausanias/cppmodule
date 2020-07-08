/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 20:22:22 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/08 17:10:10 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	
	FragTrap f("CL4P-TP");

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
	return 0;
}