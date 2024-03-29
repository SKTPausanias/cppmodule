/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 19:25:22 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/14 18:36:34 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
private:
	Peon();
public:
	Peon(std::string name);
	virtual ~Peon();
	Peon(const Peon &c);
	Peon &operator=(const Peon &c);

	virtual void getPolymorphed() const;
};

#endif