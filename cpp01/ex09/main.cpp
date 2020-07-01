/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 15:27:37 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/01 15:56:16 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main()
{
    Logger ejemplo;
    ejemplo.log("logToConsole", "que pasaloco");
    ejemplo.log("logToFile", "lmamaololo");
}