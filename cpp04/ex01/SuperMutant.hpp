/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 01:23:35 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/14 12:24:54 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant: public Enemy
{
public:
	SuperMutant();
	SuperMutant(SuperMutant const &c);
	~SuperMutant();
    SuperMutant &operator=(SuperMutant const &c);

	virtual void takeDamage(int damage);
};

#endif