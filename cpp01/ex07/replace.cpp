/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 02:21:05 by mlaplana          #+#    #+#             */
/*   Updated: 2020/06/30 19:57:48 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int error(std::string message)
{
    std::cerr << message << std::endl;
    return 1;
}

int main(int argc, char **av)
{
    if (argc != 4)
        return error("Invalid number of arguments");
    
    std::string file = av[1];
    std::string find = av[2];
    std::string repl = av[3];
    std::string buff;
    
    if (!file.length() || !find.length() || !repl.length())
        return error("Invalid parameters");

    std::ifstream r;
    std::ofstream w;
    std::string new_file = file;
    int i = 0;
    
    while (new_file[i])
    {   
        new_file[i] = toupper(new_file[i]);
        i++;
    }
    
    r.open(file);
    w.open((file + ".replace"));
    if (!r || !w)
        return error("Failed to open file");
    
    while (getline(r, buff))
    {
        if (buff.find(find) != std::string::npos)
        {
            while (buff.find(find) != std::string::npos)
            {
                buff.replace(buff.find(find), find.length(), repl);
            }
            w << buff << std::endl;
        }
        else
            w << buff << std::endl;
    }
    return 0;
}