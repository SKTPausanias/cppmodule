/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 13:38:10 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/14 19:42:41 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int main()
{
    Intern becario;
    Bureaucrat danny = Bureaucrat("danny ocean", 37);
    Bureaucrat loco = Bureaucrat("locooo", 12);
    OfficeBlock ob;

    ob.setIntern(becario);
    ob.setSigner(loco);
    ob.setExecutor(danny);

    try
    {
        ob.doBureaucracy("robotomy request", "uuu");
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n  -----  \n\n";

    try
    {
        ob.doBureaucracy("presidential pardon", "mommy");
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n  -----  \n\n";

    try
    {
        ob.doBureaucracy("new form lulw", "mommy");
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}