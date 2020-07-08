/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 18:07:34 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/08 18:13:48 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name): hit_points(100), max_hit_points(100), energy_points(100), 
                                        max_energy_points(100), level(1), name(_name),
                                        melee_attack_dmg(30), ranged_attack_dmg(20), armor_dmg_reduction(5)
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