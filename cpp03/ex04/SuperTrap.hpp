/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 18:33:22 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/13 20:37:26 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_TRAP_HPP
#define SUPER_TRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap 
{
private:
	SuperTrap();
public:
	SuperTrap(std::string _name);
	~SuperTrap();
	SuperTrap(const SuperTrap &c);
	SuperTrap &operator=(const SuperTrap &c);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
};

#endif