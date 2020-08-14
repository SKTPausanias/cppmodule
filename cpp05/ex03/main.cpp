/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 13:38:10 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/14 19:37:19 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern becario;
    Form *formulario;

    formulario = becario.makeForm("robotomy request", "Bender");
    delete formulario;
    formulario = becario.makeForm("presidential pardon", "Bender");
    delete formulario;
    formulario = becario.makeForm("shrubbery creation", "Bender");
    delete formulario;
    formulario = becario.makeForm("coffee", "Bender");
    delete formulario;
}