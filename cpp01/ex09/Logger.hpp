/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 15:28:05 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/01 16:00:42 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <ctime>

class Logger
{
private:
    void logToConsole(std::string str);
    void logToFile(std::string str);
    std::string makeLogEntry(std::string str);
public:
    void log(std::string const & dest, std::string const & message);
};

#endif