/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAsteroid.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 13:05:42 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/03 12:50:38 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IASTEROID_HPP
#define IASTEROID_HPP

#include <iostream>

class StripMiner;
class DeepCoreMiner;
class IAsteroid
{
    public:
        virtual ~IAsteroid() {}
        virtual std::string beMined(DeepCoreMiner *miner) const = 0;
        virtual std::string beMined(StripMiner *miner) const = 0;
    
        virtual std::string getName() const = 0;
};

#endif