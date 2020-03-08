/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 14:31:12 by mlaplana          #+#    #+#             */
/*   Updated: 2020/03/08 14:31:13 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string _type;
public:
	ZombieEvent(std::string type);
	std::string get_type() const;
	Zombie *newZombie(std::string name) const;
	void setZombieType(std::string type);
	void randomChump() const;
};

#endif