/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 13:38:10 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/04 13:54:44 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat john("John", 100);
	std::cout << john << std::endl;
	john.incrementGrade();
	std::cout << john << std::endl;
	john.decrementGrade();
	std::cout << john << std::endl;

    try
    {
		Bureaucrat jack("Jack", 0);
		std::cout << jack << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
		Bureaucrat jack("Jack", 200);
		std::cout << jack << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
	try
	{
		Bureaucrat jack("Jack", 1);
		std::cout << jack << std::endl;
		jack.incrementGrade();
		std::cout << jack << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat jack("Jack", 150);
		std::cout << jack << std::endl;
		jack.decrementGrade();
		std::cout << jack << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
}