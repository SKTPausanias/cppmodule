/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 01:23:17 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/14 11:59:49 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &c);
	~PlasmaRifle();
    PlasmaRifle &operator=(PlasmaRifle const &c);

	void attack(void) const;
};

#endif