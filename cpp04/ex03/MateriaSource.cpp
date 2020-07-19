/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 19:20:50 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/19 21:55:20 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->known[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete this->known[i];
}

MateriaSource::MateriaSource(const MateriaSource &c)
{
    *this = c;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &c)
{
	for (int i = 0; i < 4; i++)
		delete this->known[i];
    for (int i = 0; i < 4; i++)
        this->known[i] = c.known[i]->clone();
    return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (known[3] || m == nullptr)
		return;
	int i = 0;
	while (known[i])
		i++;
	known[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->known[i] && this->known[i]->getType() == type)
            return this->known[i]->clone();
    }
    return nullptr;
}