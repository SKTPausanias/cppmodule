/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 19:23:07 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/14 18:56:35 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
private:
	std::string _name, _title;

	Sorcerer();
public:
	Sorcerer(std::string name, std::string title);
	~Sorcerer();
	Sorcerer(const Sorcerer &c);
	Sorcerer &operator=(const Sorcerer &c);

	const std::string &getName(void) const;
	const std::string &getTitle(void) const;
	void polymorph(Victim const &c) const;
};

std::ostream & operator<<(std::ostream &out, Sorcerer const &c);

#endif