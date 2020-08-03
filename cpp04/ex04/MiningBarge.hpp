/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 13:05:59 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/03 13:15:57 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MININGBARGE_HPP
#define MININGBARGE_HPP

#include "IMiningLaser.hpp"

class MiningBarge
{
    private:
        IMiningLaser *lasers[4];

    public:
        MiningBarge();
        ~MiningBarge();
        MiningBarge(const MiningBarge &c);
        MiningBarge &operator=(const MiningBarge &c);

        void equip(IMiningLaser *laser);
        void mine(IAsteroid *asteroid) const;
};

#endif