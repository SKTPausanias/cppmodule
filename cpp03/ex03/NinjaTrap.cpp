/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 17:33:51 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/13 18:08:07 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string _name):  ClapTrap(_name, 60, 60, 120, 120, 1, 60, 5, 0)
{
    std::cout << "NINJ4-TP " << this->name << ": This time it'll be awesome, I promise!" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "NINJ4-TP " << this->name << ": I'll get you next time!" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &c): ClapTrap(c.name, c.hit_points, c.max_hit_points, c.energy_points,
                                        c.max_energy_points, c.level, c.melee_attack_dmg, c.ranged_attack_dmg,
                                        c.armor_dmg_reduction)
{
    std::cout << "NINJ4-TP " << this->name << ": Recompiling my combat code!" << std::endl;
    *this = c;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &c)
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

void NinjaTrap::rangedAttack(std::string const & target)
{
    std::cout << "NINJ4-TP " << this->name << ": surikeeen" << std::endl;
    std::cout << "NINJ4-TP " << this->name << " attacked " << target 
    << " at range, causing " << this->ranged_attack_dmg << " points of damage!" << std::endl;
}

void NinjaTrap::meleeAttack(std::string const & target)
{
    std::cout << "NINJ4-TP " << this->name << ": Yeehaw!" << std::endl; 
    std::cout << "NINJ4-TP " << this->name << " attacked " << target 
    << " at melee, causing " << this->melee_attack_dmg << " points of damage!" << std::endl;
}

void NinjaTrap::ninjaShoebox(const FragTrap &target)
{
	std::cout << "NINJ4-TP " <<  this->getName() << " attacks FragTrap" << target.getName() << std::endl;
	std::cout << "NINJ4-TP " <<  this->getName() << " dieeeee" << std::endl;
}

void NinjaTrap::ninjaShoebox(const ScavTrap &target)
{
	std::cout << "NINJ4-TP " <<  this->getName() << " attacks ScavTrap" << target.getName() << std::endl;
	std::cout << "NINJ4-TP " <<  this->getName() << " u r nothing" << std::endl;
}

void NinjaTrap::ninjaShoebox(const NinjaTrap &target)
{
	std::cout << "NINJ4-TP " <<  this->getName() << " attacks NinjaTrap" << target.getName() << std::endl;
	std::cout << "NINJ4-TP " <<  this->getName() << " friend fire lulw" << std::endl;
}