/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 13:38:10 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/10 17:01:02 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    srand(time(NULL));
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
        Bureaucrat b1("Johnny", 10);
        PresidentialPardonForm f1("ur mom");
        b1.signForm(f1);
        b1.signForm(f1);
        b1.executeForm(f1);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat b1("Baby", 1);
        PresidentialPardonForm f1("ur mom");
        b1.signForm(f1);
        b1.executeForm(f1);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }   

    try
    {
        Bureaucrat b1("Manuel", 20);
        RobotomyRequestForm f2("enemy");
        b1.signForm(f2);
        b1.executeForm(f2);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

	try
	{
        Bureaucrat b1("Rogelio", 20);
        ShrubberyCreationForm f3("rat");
        b1.signForm(f3);
        b1.executeForm(f3);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
}