/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 18:26:10 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/15 19:00:45 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(): count(0), units(nullptr)
{
}

Squad::~Squad()
{
	if (this->units)
		delete[] this->units;
}

Squad::Squad(const Squad &c)
{
	*this = c;
}

Squad &Squad::operator=(const Squad &c)
{
	if (this->units)
		delete[] this->units;
	for (int i = 0; i < c.getCount(); i++)
		this->push(c.getUnit(i));
	return *this;
}

int Squad::getCount() const
{
	return this->count;
}

ISpaceMarine* Squad::getUnit(int index) const
{
	if (!this->count || index < 0 || index >= this->count)
		return nullptr;
	return this->units[index];
}

int Squad::push(ISpaceMarine* unit)
{
	if (!unit)
		return this->count;
	if (this->units)
	{
		for (int i = 0; i < this->count; i++)
		{
			if (this->units[i] == unit)
				return this->count;
		}
		ISpaceMarine **nuevo = new ISpaceMarine*[this->count + 1];
		for (int i = 0; i < this->count; i++)
			nuevo[i] = this->units[i];
		delete[] this->units;
		this->units = nuevo;
		this->units[this->count] = unit;
		this->count++;
	}
	else
	{
		this->count = 1;
		this->units = new ISpaceMarine*[1];
		this->units[0] = unit;
	}
	return this->count;
}