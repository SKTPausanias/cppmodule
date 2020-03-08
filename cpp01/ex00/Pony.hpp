/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 13:03:00 by mlaplana          #+#    #+#             */
/*   Updated: 2020/03/08 13:03:02 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Pony
{
public:
	std::string color;
};
Pony *ponyOnTheHeap();
Pony ponyOnTheStack();

#endif
