/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 01:22:54 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/14 14:01:21 by mlaplana         ###   ########.fr       */
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

void recoverAP();
void equip(AWeapon*);
void attack(Enemy*);

std::string const &Character::getName() const
{
    return _name;
}