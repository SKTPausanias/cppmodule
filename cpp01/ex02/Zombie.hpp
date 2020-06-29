/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anias <anias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 14:30:40 by mlaplana          #+#    #+#             */
/*   Updated: 2020/06/29 18:24:52 by anias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string _name, _type;
	public:
		Zombie(std::string type, std::string name);
		Zombie(void);

		std::string get_name()	const;
		std::string get_type()	const;

		void announce();
};

#endif

