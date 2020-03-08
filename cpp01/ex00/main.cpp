/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 13:04:33 by mlaplana          #+#    #+#             */
/*   Updated: 2020/03/08 13:04:35 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int main()
{
	Pony *ponyHeap = ponyOnTheHeap();
	Pony ponyStack = ponyOnTheStack();

	ponyHeap->color = "yellow";
	ponyStack.color = "blue";

	delete ponyHeap;
}