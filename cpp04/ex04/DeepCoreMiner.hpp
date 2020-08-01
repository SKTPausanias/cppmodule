/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 13:01:22 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/01 14:33:32 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEEPCOREMINER_HPP
#define DEEPCOREMINER_HPP

#include "IMiningLaser.hpp"
class DeepCoreMiner : public IMiningLaser
{
    public:
        DeepCoreMiner();
        virtual ~DeepCoreMiner();
        DeepCoreMiner(const DeepCoreMiner &c);
        DeepCoreMiner &operator=(const DeepCoreMiner &c);
        
        void mine(IAsteroid* asteroid);
};

#endif