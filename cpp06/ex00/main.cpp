/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 13:52:45 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/19 17:50:36 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <iomanip>
# include <sstream>
# include <string>
# include <cctype>
# include <cmath>
# include <limits>

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
    const char *str1 = str.c_str();
    float f = static_cast<float>(strtod(str1, nullptr));

    if (str == "+inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
        return;
    }
    else if (str == "-inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
        return;
    }
    else if (str == "nanf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        return;
    }

    char c = static_cast<char>(f);
    int i = static_cast<int>(f);
    double d = static_cast<double>(f);

    if (i != f || f > (float)std::numeric_limits<int>::max() || f < (float)std::numeric_limits<int>::min())
    {
        std::cout << "char: Impossible" << std::endl;
        std::cout << "int: Impossible" << std::endl;
        std::cout << "float: " << f << ".0f" << std::endl;
        std::cout << "double: " << d << ".0" << std::endl;
        return ;
    }
    if (isprint(c))
        std::cout << "char: " << "'" << c << "'" << std::endl;   
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << ".0f" << std::endl;
    std::cout << "double: " << d << ".0" << std::endl;
}

void handleDouble(std::string str)
{
    std::stringstream ss;
    ss << str;
    double d;
    ss >> d;

    if (str == "+inf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
        return;
    }
    else if (str == "-inf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
        return;
    }
    else if (str == "nan")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        return;
    }
    
    char c = static_cast<char>(d);
    int i = static_cast<int>(d);
    float f = static_cast<float>(d);

    if (i != d || d > (double)std::numeric_limits<int>::max() || d < (double)std::numeric_limits<int>::min())
    {
        std::cout << "char: Impossible" << std::endl;
        std::cout << "int: Impossible" << std::endl;
        std::cout << "float: " << f << ".0f" << std::endl;
        std::cout << "double: " << d << ".0" << std::endl;
        return ;
    }
    if (isprint(c))
        std::cout << "char: " << "'" << c << "'" << std::endl;   
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << ".0f" << std::endl;
    std::cout << "double: " << d << ".0" << std::endl;
}

void handleChar(std::string str)
{
    char c = str[0];
    int i = static_cast<int>(c);
    float f = static_cast<float>(c);
    double d = static_cast<double>(c);

    if (isprint(c))
        std::cout << "char: " << "'" << c << "'" << std::endl;   
    else
        std::cout << "char: Non displayable" << std::endl; 
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << ".0f" << std::endl;
    std::cout << "double: " << d << ".0" << std::endl;
}

void handleInt(std::string str)
{
    long value;
    std::stringstream ss;
    
    ss << str;
    ss >> value;
    if (value > std::numeric_limits<int>::max() ||
    value < std::numeric_limits<int>::min())
    {
        std::cout << "char: Impossible" << std::endl;
        std::cout << "int: Impossible" << std::endl;
        std::cout << "float: Impossible" << std::endl;
        std::cout << "double: Impossible" << std::endl;
        return;
    }
    int i = static_cast<int>(value);
    char c = static_cast<char>(i);
    float f = static_cast<float>(i);
    double d = static_cast<double>(i);

    if (isprint(c))
        std::cout << "char: " << "'" << c << "'" << std::endl;
    else
        std::cout << "char: Non displayable\n";
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << ".0f" << std::endl;
    std::cout << "double: " << d << ".0" << std::endl; 
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