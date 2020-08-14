/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 17:50:46 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/14 12:40:41 by mlaplana         ###   ########.fr       */
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

Form* Intern::createPresidentialPardonForm(std::string const &target)
{
    return new PresidentialPardonForm(target);
}

Form* Intern::createRobotomyRequestForm(std::string const &target)
{
    return new RobotomyRequestForm(target);
}

Form* Intern::createShrubberyCreationForm(std::string const &target)
{
    return new ShrubberyCreationForm(target);
}

Form *Intern::makeForm(std::string name, std::string const &target)
{
    std::string forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};

    typedef Form* (Intern::*Functions)(std::string const &target);
    Functions functions[3] = {
        &Intern::createPresidentialPardonForm,
        &Intern::createRobotomyRequestForm,
        &Intern::createShrubberyCreationForm
    };

    for (int i = 0; i < 3; i++)
    {
        if (forms[i] == name)
        {
            std::cout << "Intern creates a " << name << " form!" << std::endl;
            return (this->*(functions[i]))(target);
        }
    }
    std::cout << "Form not found\n";
    return (NULL);   
}
