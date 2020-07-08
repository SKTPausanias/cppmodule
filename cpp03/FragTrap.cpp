/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 20:22:19 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/08 14:06:42 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

static const std::string attacks[] = 
{
    "Avada kedavra!",
    "Gotta blow up a bad guy, GOTTA BLOW UP A BAD GUY!",
    "For you...I commit...seddoku...",
    "Kill, reload! Kill, reload! KILL! RELOAD!",
    "Boogie time!"
};

FragTrap::FragTrap(std::string _name): name(_name)
{
    std::cout << "Hey everybody! Check out my package!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "No fair! I wasn't ready." << std::endl;
}

FragTrap::FragTrap(const FragTrap &c)
{
    std::cout << "Recompiling my combat code!" << std::endl;
    *this = c;
}

FragTrap &FragTrap::operator=(const FragTrap &c)
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

void FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->name << ": I am a tornado of death and bullets!" << std::endl;
    std::cout << "FR4G-TP " << this->name << "attacks " << target 
    << " at range, causing " << this->ranged_attack_dmg << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->name << ": Hyah!" << std::endl; 
    std::cout << "FR4G-TP " << this->name << "attacks " << target 
    << " at melee, causing " << this->melee_attack_dmg << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    int damaged = amount - this->armor_dmg_reduction;
    if (this->hit_points - damaged < 0)
        this->hit_points = 0;
    std::cout << "FR4G-TP " << this->name << " took " 
    << damaged << " points of damage" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    int healed = this->hit_points + amount;
    if (healed > max_hit_points)
        this->hit_points = max_hit_points;
    std::cout << "FR4G-TP " << this->name << " repaired " 
    << amount << " points of health" << std::endl;    
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    if (this->energy_points >= 25)
    {
        std::cout << "FR4G-TP " << this->name << attacks[rand() % 5] << std::endl;+
        this->energy_points -= 25;
    }
    else
    {
        std::cout << "FR4G-TP " << this->name << " is out of energy :(" << std::endl;
    }
}
