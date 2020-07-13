/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 20:22:19 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/13 17:20:40 by mlaplana         ###   ########.fr       */
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

FragTrap::FragTrap(std::string _name):  ClapTrap(_name, 100, 100, 100, 100, 1, 30, 20, 5)
{
    std::cout << "FR4G-TP " << this->name << ": Hey everybody! Check out my package!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FR4G-TP " << this->name << ": No fair! I wasn't ready." << std::endl;
}

FragTrap::FragTrap(const FragTrap &c): ClapTrap(c.name, c.hit_points, c.max_hit_points, c.energy_points,
                                        c.max_energy_points, c.level, c.melee_attack_dmg, c.ranged_attack_dmg,
                                        c.armor_dmg_reduction)
{
    std::cout << "FR4G-TP " << this->name << ": Recompiling my combat code!" << std::endl;
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
    std::cout << "FR4G-TP " << this->name << " attacks " << target 
    << " at range, causing " << this->ranged_attack_dmg << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->name << ": Hyah!" << std::endl; 
    std::cout << "FR4G-TP " << this->name << " attacks " << target 
    << " at melee, causing " << this->melee_attack_dmg << " points of damage!" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    if (this->energy_points >= 25)
    {
        std::cout << "FR4G-TP " << this->name << " " << attacks[rand() % 5] << " "
        << target << " damaged" << std::endl;
        this->energy_points -= 25;
    }
    else
    {
        std::cout << "FR4G-TP " << this->name << " is out of energy :(" << std::endl;
    }
}
