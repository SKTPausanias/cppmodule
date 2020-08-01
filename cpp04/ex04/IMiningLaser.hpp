/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMiningLaser.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 13:05:45 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/01 13:13:42 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMININGLASER_HPP
#define IMININGLASER_HPP

#include "IAsteroid.hpp"
#include <iostream>

class IMiningLaser
{
    public:
    virtual ~IMiningLaser() {}
    virtual void mine(IAsteroid* asteroid) = 0;
};

#endif