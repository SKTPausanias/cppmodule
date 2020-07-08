/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 13:04:33 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/03 14:54:57 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int main()
{
    Pony *onTheHeap = ponyOnTheHeap();
    Pony onTheStack = ponyOnTheStack();

    onTheHeap->color = "yellow";
    onTheStack.color = "pink";

    std::cout << onTheHeap->color << std::endl;
    std::cout << onTheStack.color << std::endl;
    
    delete onTheHeap;
}