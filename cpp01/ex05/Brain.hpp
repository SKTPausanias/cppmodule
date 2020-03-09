/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 19:19:05 by mlaplana          #+#    #+#             */
/*   Updated: 2020/03/09 19:48:25 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
private:
	/* data */
public:
	Brain(/* args */);
	~Brain();
	std::string identify() const;
};

Brain::Brain(/* args */)
{
}

Brain::~Brain()
{
}

#endif