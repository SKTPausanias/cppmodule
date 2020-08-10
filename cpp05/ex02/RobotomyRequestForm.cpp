/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 13:22:01 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/10 16:30:03 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):
                Form("RobotomyRequest", 72, 45), _target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &c): Form(c), _target(c._target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &c)
{
    this->_target = c._target;
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    Form::execute(executor);
    std::cout << "PRRRRRRRRRRRRRR" << std::endl;
	if (rand() % 2)
		std::cout << this->_target << " has been robotomized successfully." << std::endl;
	else
		std::cout << this->_target << " was unfortunately not robotomized." << std::endl;
}