/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KoalaSteroid.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 13:05:47 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/03 13:06:45 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "KoalaSteroid.hpp"

KoalaSteroid::KoalaSteroid():
	name("Asteroid")
{
}

KoalaSteroid::KoalaSteroid(std::string const &name):
	name(name)
{
}

KoalaSteroid::KoalaSteroid(KoalaSteroid const &other):
	name(other.name)
{
}


KoalaSteroid::~KoalaSteroid()
{
}

KoalaSteroid &KoalaSteroid::operator=(KoalaSteroid const &other)
{
	this->name = other.name;
	return (*this);
}

std::string KoalaSteroid::getName(void) const
{
	return (this->name);
}

std::string KoalaSteroid::beMined(DeepCoreMiner *laser) const
{
	(void)laser;
	return (std::string("Dragonite"));
}

std::string KoalaSteroid::beMined(StripMiner *laser) const
{
	(void)laser;
	return (std::string("Flavium"));
}