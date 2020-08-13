/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 17:50:46 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/13 19:17:44 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    
}

Intern::~Intern()
{

}

Intern::Intern(const Intern &c)
{
    *this = c;
}

Intern &Intern::operator=(const Intern &c)
{
    (void)c;
    return *this;
}

Form *Intern::createPresidentialPardonForm(std::string target)
{
    new PresidentialPardonForm(target);
}

Form *Intern::createRobotomyRequestForm(std::string target)
{
    new RobotomyRequestForm(target);
}

Form *Intern::createShrubberyCreationForm(std::string target)
{
    new ShrubberyCreationForm(target);
}

Form *Intern::makeForm(std::string name, std::string target)
{
    std::string forms[] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    
    Form (*functions[3])(std::string target) = 
    {&Intern::createPresidentialPardonForm, &Intern::createRobotomyRequestForm,
    &Intern::createShrubberyCreationForm};
}
