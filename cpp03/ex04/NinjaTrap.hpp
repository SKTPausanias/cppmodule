/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 17:33:56 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/13 20:36:55 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_HPP
#define NINJA_TRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap 
{
private:
	NinjaTrap();
public:
	NinjaTrap(std::string _name);
	~NinjaTrap();
	NinjaTrap(const NinjaTrap &c);
	NinjaTrap &operator=(const NinjaTrap &c);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);

	void ninjaShoebox(const FragTrap &target);
    void ninjaShoebox(const ScavTrap &target);
	void ninjaShoebox(const NinjaTrap &target);
};

#endif