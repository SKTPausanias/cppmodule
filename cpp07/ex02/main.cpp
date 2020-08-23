/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 16:45:04 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/23 17:11:16 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

template <typename T>
void display(const Array<T> &array)
{
    std::cout << "Array {";
    for (size_t i = 0; i < array.size(); i++)
        std::cout << " " << array[i];
    std::cout << " }" << std::endl;
}

int main()
{
    Array<int> array(5);

    display(array);
    array[3] = 19;
    display(array);
    array[0] = 6;
    display(array);

    Array<int> arr2;

    display(arr2);
    arr2 = array;
    display(arr2);

    Array<int> arr3(arr2);

    display(arr3);

    try
    {
        array[5] = 5;
    }
    catch (const Array<int>::OutOfBoundException &e)
    {
        std::cout << "Caught OutOfBoundException: " << e.what() << std::endl;
    }
    return 0;
}