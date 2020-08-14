/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 13:52:45 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/14 21:14:18 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "string"

void parse(std::string str)
{
    size_t length = str.length();
    
    if (length == 1 && !isdigit(str[0]))
    {
        if (isprint(str[0]))
        {

        }
        else
            std::cout << "char: Non displayable\n";
    }
}

int isDot(std::string str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == '.')
            return 1;
        i++;
    }
    return 0;
}

int main(int argc, char **av)
{
    if (argc != 2)
        std::cout << "Invalid arguments!\n";
    else
    {
        std::string str = av[1];
        size_t length = str.length();

        if (length > 1 && str[length - 1] == 'f' && str != "-inf" && str != "+inf")
            handleFloat(str);
        else if  (isDot(str.c_str()) || str == "-inf" || str == "+inf" || str == "nan")
            handleDouble(str);
    }
    return 0;
}