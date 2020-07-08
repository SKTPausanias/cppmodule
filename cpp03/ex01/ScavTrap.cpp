/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 17:22:43 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/08 17:41:09 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

static const std::string attacks[] = 
{
    "Is it dead? Can, can I open my eyes now?",
    "Stop me before I kill again, except don't!",
    "You can't just program this level of excitement!",
    "What is that smell? Oh, never mind... it's just you!",
    "Dance battle! Or, you know... regular battle."
};

ScavTrap::ScavTrap(std::string _name): hit_points(100), max_hit_points(100), energy_points(50), 
                                        max_energy_points(50), level(1), name(_name),
                                        melee_attack_dmg(20), ranged_attack_dmg(15), armor_dmg_reduction(3)
{
    std::cout << "SC4V-TP " << this->name << ": Glitching weirdness is a term of endearment, right?" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "SC4V-TP " << this->name << ": Crap happens." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &c)
{
    std::cout << "SC4V-TP " << this->name << ": Recompiling my combat code!" << std::endl;
    *this = c;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &c)
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

void ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "SC4V-TP " << this->name << ": Can't touch this!" << std::endl;
    std::cout << "SC4V-TP " << this->name << " attacked " << target 
    << " at range, causing " << this->ranged_attack_dmg << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "SC4V-TP " << this->name << ": Take that!" << std::endl; 
    std::cout << "SC4V-TP " << this->name << " attacked " << target 
    << " at melee, causing " << this->melee_attack_dmg << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    int damaged = amount - this->armor_dmg_reduction;
    if (this->hit_points - damaged < 0)
        this->hit_points = 0;
    else
        this->hit_points -= damaged;
    std::cout << "SC4V-TP " << this->name << " took " 
    << damaged << " points of damage" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    int healed = this->hit_points + amount;
    if (healed > max_hit_points)
    {
        amount = max_hit_points - this->hit_points; 
        this->hit_points = max_hit_points;
    }
    else
        this->hit_points += amount;
    std::cout << "SC4V-TP " << this->name << " repaired " 
    << amount << " points of health" << std::endl;
}

void ScavTrap::challengeNewcomer()
{
    std::cout << "SC4V-TP " << this->name << ": " << attacks[rand() % 5] << std::endl;
}