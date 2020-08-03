/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 13:05:57 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/03 13:16:12 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"

MiningBarge::MiningBarge()
{
    for (int i = 0; i < 4; i++)
        lasers[i] = NULL;
}

MiningBarge::~MiningBarge()
{
    for (int i = 0; i < 4; i++)
        delete lasers[i];
}

MiningBarge::MiningBarge(const MiningBarge &c)
{
    for (int i = 0; i < 4; i++)
        lasers[i] = c.lasers[i];
}

MiningBarge &MiningBarge::operator=(const MiningBarge &c)
{
    for (int i = 0; i < 4; i++)
        delete lasers[i];
    for (int i = 0; i < 4; i++)
        lasers[i] = c.lasers[i];
    return *this;
}

void MiningBarge::equip(IMiningLaser *laser)
{
    if (lasers[3])
        return;
    int i = 0;
    while (lasers[i])
        i++;
    lasers[i] = laser;
}

void MiningBarge::mine(IAsteroid *asteroid) const
{
    for (int i = 0; i < 4; i++)
        if (lasers[i])
            lasers[i]->mine(asteroid);
}