/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 19:20:14 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/17 18:00:41 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name): _name(name)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
}

Character::~Character()
{
	delete[] this->inventory;
}

Character::Character(Character const &c)
{
	*this = c;
}

Character &Character::operator=(Character const &c)
{
	this->_name = c._name;
	delete[] this->inventory;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = c.inventory[i]->clone();
	return *this;
}

std::string const &Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	if (inventory[3] || m == nullptr)
		return;
	int i = 0;
	while (inventory[i])
		i++;
	inventory[i] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 4 || !inventory[idx])
		return;
	for (int i = idx; i < 3; i++)
	{
		this->inventory[i]
	}
}

void use(int idx, Character& target);