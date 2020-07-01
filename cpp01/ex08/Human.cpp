/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 01:44:30 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/01 14:59:50 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>

void Human::meleeAttack(std::string const & target)
{
    std::cout << "i punch you " << target << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
    std::cout << "pew pew" << std::endl;
    std::cout << target << " damaged" << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
    std::cout << "RAAAAAAAAWR" << std::endl;
    std::cout << target << " got scared " <<std::endl;  
}

void Human::action(std::string const & action_name, std::string const & target)
{
    std::string actionsStr[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
    
    typedef void (Human::*Actions)(std::string const & target);
    Actions actions[3] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
    
    for (int i = 0; i < 3; i++)
    {
        if (action_name == actionsStr[i])
        {
            (this->*(actions[i]))(target);
            break;
        }
    }
    
}