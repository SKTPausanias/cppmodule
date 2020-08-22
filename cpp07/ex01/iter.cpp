/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 17:52:13 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/22 19:35:38 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename myType>
void iter(myType *arr, size_t length, void (*function)(myType &param))
{
    for (size_t i = 0; i < length; i++)
        function(arr[i]);
}

void print_int(int &i)
{
    std::cout << i << std::endl;
}

void print_str(std::string &str)
{
    std::cout << str << "\n";
}

void print_double(double &d)
{
    std::cout << d << std::endl;
}


int main()
{
    int arr[4] = {0, 1, 2, 3};

    iter(arr, 4, print_int);

    std::string strings[] = {"hola", "que pasa", "como estas"};
    iter(strings, 3, print_str);

    double arr2[2] = {5.2, 2.7};
    iter(arr2, 2, print_double);
    return 0;
}