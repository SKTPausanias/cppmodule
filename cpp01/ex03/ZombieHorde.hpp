/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 12:34:41 by mlaplana          #+#    #+#             */
/*   Updated: 2020/03/09 12:34:43 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

#include "Zombie.hpp"
#include <time.h>

class ZombieHorde
{
	private:
		int _n;
		Zombie *_zombies;
	public:
		ZombieHorde(int n);
		~ZombieHorde();
		void announce() const;
};

#endif
