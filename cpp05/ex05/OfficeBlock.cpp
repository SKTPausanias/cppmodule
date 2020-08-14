/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 13:26:56 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/14 19:38:44 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock(): _intern(nullptr), _signer(nullptr), _executor(nullptr)
{    
}

OfficeBlock::OfficeBlock(Intern &intern, Bureaucrat &signer, Bureaucrat &executor):
                        _intern(&intern), _signer(&signer), _executor(&executor)
{
}

OfficeBlock::~OfficeBlock()
{   
}

const char* OfficeBlock::NoInternException::what() const throw() 
{
    return "Can't find the intern!";   
}

const char* OfficeBlock::NoSignerException::what() const throw()
{
    return "Can't find a signer!";
}

const char* OfficeBlock::NoExecutorException::what() const throw()
{
    return "Can't find a executor!";
}

void OfficeBlock::setIntern(Intern &intern)
{
    this->_intern = &intern;
}

void OfficeBlock::setSigner(Bureaucrat &signer)
{
    this->_signer = &signer;
}

void OfficeBlock::setExecutor(Bureaucrat &executor)
{
    this->_executor = &executor;
}

void OfficeBlock::doBureaucracy(std::string name, std::string target) const
{
    if (!this->_intern)
        throw OfficeBlock::NoInternException();
    Form *form = _intern->makeForm(name, target);
    if (!form)
        return;
    if (!this->_signer)
    {
        delete form;
        throw OfficeBlock::NoSignerException();
    }
    _signer->signForm(*form);
    if (!this->_executor)
    {
        delete form;
        throw OfficeBlock::NoExecutorException();
    }
    _executor->executeForm(*form);
}