/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 20:22:14 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/08 13:09:11 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP
#define FRAGTRAP

#include <iostream>

class FragTrap
{
private:
	int hit_points = 100;
	int max_hit_points = 100;
	int energy_points = 100;
	int max_energy_points = 100;
	int level = 1;
	std::string name;
	int melee_attack_dmg = 30;
	int ranged_attack_dmg = 20;
	int armor_dmg_reduction = 5;
public:
	FragTrap(std::string _name);
	~FragTrap();
	FragTrap(const FragTrap &c);
	FragTrap &operator=(const FragTrap &c);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);
};

#endif
