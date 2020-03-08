/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 13:03:05 by mlaplana          #+#    #+#             */
/*   Updated: 2020/03/08 13:03:07 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony *ponyOnTheHeap()
{
	return new Pony();
}

Pony ponyOntheStack()
{
	Pony ponyStack;
	return ponyStack;
}