/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 20:22:19 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/08 10:50:48 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string _name): name(_name)
{
    std::cout << "Hey everybody! Check out my package!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "No fair! I wasn't ready." << std::endl;
}

FragTrap::FragTrap(const FragTrap &c)
{
    std::cout << "Recompiling my combat code!" << std::endl;
    *this = c;
}

FragTrap &FragTrap::operator=(const FragTrap &c)
{
    this->name = c.name;
    std::cout << this->hit_points << std::endl;
    return *this;
}