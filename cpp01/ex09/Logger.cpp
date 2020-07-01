/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 15:28:00 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/01 16:01:33 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

void Logger::logToConsole(std::string str)
{
    str = makeLogEntry(str);
    std::cout << str << std::endl;
}

void Logger::logToFile(std::string str)
{
    str = makeLogEntry(str);
    std::ofstream file;
    file.open("console_log.txt", std::fstream::out | std::fstream::app);
    if (!file)
        std::cout << "error creating file";
    else
    {
        file << str << std::endl;
    }
    
}

std::string Logger::makeLogEntry(std::string str)
{
    time_t rawtime;
    struct tm * timeinfo;
    char buffer[80];

    time (&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer,sizeof(buffer),"%d-%m-%Y %H:%M:%S",timeinfo);
    std::string str2(buffer);
    str = str2 + " -> " + str;
    return str;    
}

void Logger::log(std::string const & dest, std::string const & message)
{
    const std::string array[] = {"logToConsole", "logToFile"};

    typedef void (Logger::*Logs)(std::string str);
    Logs logs[2] = {&Logger::logToConsole, &Logger::logToFile};
    for (int i = 0; i < 2; i++)
    {
        if (dest == array[i])
        {
            (this->*(logs[i]))(message);
            break;
        }
    }
    
}