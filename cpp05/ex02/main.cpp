/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 13:38:10 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/06 12:21:04 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

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
        Bureaucrat b1("Johnny", 150);
        Form f1("Formulario", 150, 5);
        b1.signForm(f1);
        std::cout << "Success: " << b1 << " " << f1 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat b1("Johnny", 150);
        Form f2("Formulario", 149, 5);
        b1.signForm(f2);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

	try
	{
		Form formException("Important Form", 100, 1000);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
}