/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 13:03:37 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/03 12:45:08 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StripMiner.hpp"

StripMiner::StripMiner()
{

}

StripMiner::~StripMiner()
{

}

StripMiner::StripMiner(const StripMiner &c)
{
    *this = c;
}

StripMiner &StripMiner::operator=(const StripMiner &c)
{
    (void)c;
    return *this;
}
        
void StripMiner::mine(IAsteroid* asteroid)
{
    if (asteroid == nullptr)
        return;
    std::cout << "* strip mining ... got " << asteroid->beMined(this) << " ! *" << std::endl;
}