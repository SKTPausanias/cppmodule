/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 19:23:50 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/13 20:41:59 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <iostream>

class Victim
{
protected:
	std::string _name;

	Victim();
public:
	Victim(std::string name);
	~Victim();
	Victim(const Victim &c);
	Victim &operator=(const Victim &c);

	const std::string getName(void) const;
	const std::string getTitle(void) const;
	virtual void getPolymorphed() const;
};

std::ostream & operator<<(std::ostream &out, Victim const &c);

#endif