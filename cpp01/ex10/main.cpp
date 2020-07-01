/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 16:16:29 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/01 16:37:55 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **av)
{
    if (argc == 1)
    {
        std::string str;
        while (1)
        {
            std::cin >> str;
            std::cout << str << std::endl;
        }
    }
    else
    {
        for (int i = 1; i < argc; i++)
        {
            std::ifstream file;
            file.open(av[i]);
            if (!file)
            {
                std::cout << "Can not open " << av[i] << std::endl;
                continue;
            }
            char c = file.get();
            while (!file.eof())
            {
                std::cout << c;
                c = file.get();
            }
            file.close();
        }       
    }
}