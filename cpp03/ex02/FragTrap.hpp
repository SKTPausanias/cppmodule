/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 20:22:14 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/08 18:33:26 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP
#define FRAGTRAP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	int hit_points;
	int max_hit_points;
	int energy_points;
	int max_energy_points;
	int level;
	std::string name;
	int melee_attack_dmg;
	int ranged_attack_dmg;
	int armor_dmg_reduction;
public:
	FragTrap(std::string _name);
	~FragTrap();
	FragTrap(const FragTrap &c);
	FragTrap &operator=(const FragTrap &c);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void vaulthunter_dot_exe(std::string const & target);
};

#endif
