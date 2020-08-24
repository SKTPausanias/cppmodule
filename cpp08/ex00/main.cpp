/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 01:21:00 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/24 15:18:31 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>

int main()
{
    std::vector<int> vec;
    for (int i = 0; i < 5; i++)
        vec.push_back(i);
    std::vector<int>::iterator found = easyfind(vec, 2);
    if (found == vec.end())
        std::cout << "cannot find value in vector" << std::endl;
    else
        std::cout << "found " << *found << " in vector " << std::endl;
    if (easyfind(vec, 99) == vec.end())
        std::cout << "99 not found in vector" << std::endl;
}