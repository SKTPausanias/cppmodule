/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 13:03:40 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/01 14:37:59 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRIPMINER_HPP
#define STRIPMINER_HPP

#include "IMiningLaser.hpp"
class StripMiner : public IMiningLaser
{
    public:
        StripMiner();
        virtual ~StripMiner();
        StripMiner(const StripMiner &c);
        StripMiner &operator=(const StripMiner &c);
        
        void mine(IAsteroid* asteroid);
};

#endif