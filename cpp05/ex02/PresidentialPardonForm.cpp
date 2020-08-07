/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 13:21:54 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/07 14:25:46 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):
                Form("PresidentalPardon", 25, 5), _target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &c): Form(c), _target(c._target)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &c)
{
    this->_target = c._target;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
    Form::execute(executor);
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}