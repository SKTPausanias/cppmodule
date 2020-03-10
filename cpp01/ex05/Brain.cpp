/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 19:17:08 by mlaplana          #+#    #+#             */
/*   Updated: 2020/03/10 16:56:10 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

int Brain::get_consistency() const
{
	return consistency;
}

std::string Brain::identify() const
{
	std::stringstream str;
	str << std::hex << std::showbase << (unsigned long)this;
	std::cout << str.str();
}
