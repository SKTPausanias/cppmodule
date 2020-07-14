/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 01:23:01 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/14 12:14:28 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type): _hp(hp), _type(type)
{
}

Enemy::~Enemy()
{
}

Enemy::Enemy(const Enemy &c)
{
    *this = c;   
}

Enemy &Enemy::operator=(const Enemy &c)
{
    this->_hp = c._hp;
    this->_type = c._type;
    return *this; 
}

std::string const &Enemy::getType() const
{
    return _type;
}

int Enemy::getHP() const
{
    return _hp;
}

void Enemy::takeDamage(int damage)
{
    if (damage >= 0)
    {
        this->_hp -= damage;
        if (this->_hp < 0)
            this->_hp = 0;
    }
}