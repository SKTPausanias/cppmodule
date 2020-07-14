/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 01:23:23 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/14 11:59:58 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist: public AWeapon
{
public:
	PowerFist();
	PowerFist(PowerFist const &c);
	~PowerFist();
    PowerFist &operator=(PowerFist const &c);

	void attack(void) const;
};

#endif