/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 18:33:18 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/13 19:04:12 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string _name):  ClapTrap(_name, 100, 100, 120, 120, 1, 60, 20, 5), 
										  NinjaTrap(_name), FragTrap(_name)
{
    std::cout << "SUPER-TP " << this->name << ": This time it'll be awesome, I promise!" << std::endl;
}

SuperTrap::~SuperTrap()
{
    std::cout << "SUPER-TP " << this->name << ": I'll get you next time!" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &c): ClapTrap(c.name, c.hit_points, c.max_hit_points, c.energy_points,
                                        c.max_energy_points, c.level, c.melee_attack_dmg, c.ranged_attack_dmg,
                                        c.armor_dmg_reduction), NinjaTrap(c.name), FragTrap(c.name)
{
    std::cout << "SUPER-TP " << this->name << ": Recompiling my combat code!" << std::endl;
    *this = c;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &c)
{
    this->name = c.name;
    this->hit_points = c.hit_points;
    this->max_hit_points = c.max_hit_points;
    this->energy_points = c.energy_points;
    this->max_energy_points = c.max_energy_points;
    this->level = c.level;
    this->melee_attack_dmg = c.melee_attack_dmg;
    this->ranged_attack_dmg = c.ranged_attack_dmg;
    this->armor_dmg_reduction = c.armor_dmg_reduction;
    return *this;
}

void SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}