/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 13:01:18 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/03 12:12:57 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner()
{

}

DeepCoreMiner::~DeepCoreMiner()
{

}

DeepCoreMiner::DeepCoreMiner(const DeepCoreMiner &c)
{
    *this = c;
}

DeepCoreMiner &DeepCoreMiner::operator=(const DeepCoreMiner &c)
{
    (void)c;
    return *this;
}
        
void DeepCoreMiner::mine(IAsteroid* asteroid)
{
    if (asteroid == nullptr)
        return;
    std::cout << "* mining deep ... got " << asteroid->beMined(this) << " ! *" << std::endl;
}