/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 17:52:13 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/22 19:42:22 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename myType>
void iter(myType *arr, size_t length, myType (*function)(myType &param))
{
    for (size_t i = 0; i < length; i++)
        function(arr[i]);
}

int add1(int &i)
{
    i += 1;
    return i;
}

std::string print_str(std::string &str)
{
    std::cout << str << "\n";
    return str;
}

double multiply(double &d)
{
    d *= 2.0;
    return d;
}


int main()
{
    int arr[4] = {0, 1, 2, 3};

    for (size_t i = 0; i < 4; i++)
        std::cout << " " << arr[i];
    std::cout << "\n";
    iter(arr, 4, add1);
    for (size_t i = 0; i < 4; i++)
        std::cout << " " << arr[i];
    std::cout << "\n";

    std::string strings[] = {"hola", "que pasa", "como estas"};
    iter(strings, 3, print_str);

    double arr2[2] = {5.2, 2.7};
    for (size_t i = 0; i < 2; i++)
        std::cout << " " << arr2[i];
    std::cout << "\n";
    iter(arr2, 2, multiply);
    for (size_t i = 0; i < 2; i++)
        std::cout << " " << arr2[i];
    std::cout << std::endl;
    return 0;
}