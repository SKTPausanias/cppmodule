/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anias <anias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 01:51:02 by anias             #+#    #+#             */
/*   Updated: 2020/05/22 02:29:27 by anias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(Weapon weapon, std::string name): name(name), weapon(weapon)
{  
}

void HumanA::attack()
{
    std::cout << name << "attacks with his" << weapon.getType() << std::endl;
}