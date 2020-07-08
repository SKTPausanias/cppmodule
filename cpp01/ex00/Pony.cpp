/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 13:03:05 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/02 20:35:08 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony *ponyOnTheHeap()
{
	return new Pony(); //new asigna memoria para un objeto y devuelve la dirección
}

Pony ponyOnTheStack()
{
	Pony ponyStack;
	return ponyStack;
}