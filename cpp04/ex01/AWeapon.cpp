/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 01:22:46 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/14 01:51:01 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage): _name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(const AWeapon &c): _name(c._name), _apcost(c._apcost), _damage(c._damage)
{
} 

AWeapon &AWeapon::operator=(const AWeapon &c)
{
    this->_name = c._name;
    this->_apcost = c._apcost;
    this->_damage = c._damage;
    return *this;
}

std::string AWeapon::getName() const
{
    return _name;
}

int AWeapon::getAPCost() const
{
    return _apcost;
}

int AWeapon::getDamage() const
{
    return _damage;
}