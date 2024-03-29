/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 18:08:15 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/14 20:14:47 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP
#define CLAPTRAP

#include <iostream>

class ClapTrap
{
protected:
	ClapTrap();
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
	ClapTrap(std::string _name, int _hit_points, int _max_hit_points,
			int _energy_points, int _max_energy_points, int _level,
			int _melee_attack_dmg, int _ranged_attack_dmg, int _armor_dmg_reduction);
	virtual ~ClapTrap();
	ClapTrap(const ClapTrap &c);
	ClapTrap &operator=(const ClapTrap &c);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	const std::string &getName() const;
};

#endif