/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroKreog.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 13:05:35 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/03 12:55:13 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AsteroKreog.hpp"

AsteroKreog::AsteroKreog():
	name("Comet")
{
}

AsteroKreog::AsteroKreog(std::string const &name):
	name(name)
{
}

AsteroKreog::AsteroKreog(AsteroKreog const &other):
	name(other.name)
{
}


AsteroKreog::~AsteroKreog()
{
}

AsteroKreog &AsteroKreog::operator=(AsteroKreog const &other)
{
	this->name = other.name;
	return (*this);
}

std::string AsteroKreog::getName(void) const
{
	return (this->name);
}

std::string AsteroKreog::beMined(DeepCoreMiner *laser) const
{
	(void)laser;
	return (std::string("Meium"));
}

std::string AsteroKreog::beMined(StripMiner *laser) const
{
	(void)laser;
	return (std::string("Tartarite"));
}