/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 19:20:03 by mlaplana          #+#    #+#             */
/*   Updated: 2020/03/09 19:45:23 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

std::string Human::identify() const
{
    return _brain.identify();
}

Brain &Human::getBrain()
{
    return _brain;
} 