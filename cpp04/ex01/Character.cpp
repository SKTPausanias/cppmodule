/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 01:22:54 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/14 18:11:02 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name): _name(name), _ap(40), weapon(NULL)
{
}

Character::~Character()
{
}

Character::Character(const Character &c)
{
    *this = c;
}

Character &Character::operator=(const Character &c)
{
    this->_name = c._name;
    this->_ap = c._ap;
    this->weapon = c.weapon;
    return *this;
}

void Character::recoverAP()
{
    this->_ap += 10;
    if (this->_ap > 40)
        this->_ap = 40;
}

void Character::equip(AWeapon* weapon)
{
    this->weapon = weapon;
}

std::string const &Character::getName() const
{
    return _name;
}

int Character::getAP() const
{
    return this->_ap;
}

AWeapon *Character::getWeapon() const
{
    return this->weapon;
}

void Character::attack(Enemy* enemy)
{
    if (!this->weapon || !enemy || (this->_ap < this->weapon->getAPCost()))
        return ;
    this->_ap -= this->weapon->getAPCost();
    std::cout << this->_name << " attacks " << enemy->getType() <<
    " with a " << this->weapon->getName() << std::endl;
    this->weapon->attack();
    enemy->takeDamage(this->weapon->getDamage());
    if (enemy->getHP() == 0)
        delete enemy;
}

std::ostream &operator<<(std::ostream &out, Character const &c)
{
    if (c.getWeapon())
        out << c.getName() << " has " << c.getAP() << " AP and wields a " << c.getWeapon()->getName() << std::endl;
    else
        out << c.getName() << " has " << c.getAP() << " and is unarmed" << std::endl;
    return out;
}