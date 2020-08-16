/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 13:52:45 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/16 21:04:26 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "string"

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

void handleFloat(std::string str)
{
    (void)str;
}

void handleDouble(std::string str)
{
    (void)str;
}

void handleChar(std::string str)
{
    char c = str[0];
    int i = static_cast<int>(c);
    float f = static_cast<float>(c);
    double d = static_cast<double>(c);

    if (isprint(c))
    {
        std::cout << "char: " << "'" << c << "'" << std::endl;   
    }
    else
        std::cout << "char: Non displayable\n"; 
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << ".0f" << std::endl;
    std::cout << "double: " << d << ".0" << std::endl; 
}

void handleInt(std::string str)
{
    (void)str;
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
        else if (length == 1 && !isdigit(str[0]))
            handleChar(str);
        else
            handleInt(str);
    }
    return 0;
}