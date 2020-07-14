/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 17:21:23 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/14 18:33:11 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP
#define SCAVTRAP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap 
{
private:
	ScavTrap();
public:
	ScavTrap(std::string _name);
	virtual ~ScavTrap();
	ScavTrap(const ScavTrap &c);
	ScavTrap &operator=(const ScavTrap &c);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void challengeNewcomer(void);
};

#endif