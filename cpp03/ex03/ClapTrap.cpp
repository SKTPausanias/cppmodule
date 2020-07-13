/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 18:07:34 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/13 17:54:43 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name, int _hit_points, int _max_hit_points,
			int _energy_points, int _max_energy_points, int _level,
			int _melee_attack_dmg, int _ranged_attack_dmg, int _armor_dmg_reduction): 
            hit_points(_hit_points), max_hit_points(_max_hit_points), energy_points(_energy_points), 
            max_energy_points(_max_energy_points), level(_level), name(_name),
            melee_attack_dmg(_melee_attack_dmg), ranged_attack_dmg(_ranged_attack_dmg), armor_dmg_reduction(_armor_dmg_reduction)
{
    std::cout << "CL4P-TP " << this->name << ": Created" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "CL4P-TP " << this->name << ": Destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
    std::cout << "CL4P-TP " << this->name << ": Recompiling my combat code!" << std::endl;
    *this = c;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &c)
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

void ClapTrap::rangedAttack(std::string const & target)
{
    std::cout << "CL4P-TP " << this->name << " attacks " << target 
    << " at range, causing " << this->ranged_attack_dmg << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target)
{
    std::cout << "CL4P-TP " << this->name << " attacks " << target 
    << " at melee, causing " << this->melee_attack_dmg << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    int damaged = amount - this->armor_dmg_reduction;
    if (this->hit_points - damaged < 0)
        this->hit_points = 0;
    else
        this->hit_points -= damaged;
    std::cout << "CL4P-TP " << this->name << " took " 
    << damaged << " points of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    int healed = this->hit_points + amount;
    if (healed > max_hit_points)
    {
        amount = max_hit_points - this->hit_points; 
        this->hit_points = max_hit_points;
    }
    else
        this->hit_points += amount;
    std::cout << "CL4P-TP " << this->name << " repaired " 
    << amount << " points of health" << std::endl;
}

const std::string &ClapTrap::getName() const
{
    return name;
}