/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 01:43:48 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/01 14:58:53 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main()
{
    Human human;
    
    human.action("meleeAttack", "enemy");
    human.action("rangedAttack", "enemy");
    human.action("intimidatingShout", "enemy");
    return 0;
}