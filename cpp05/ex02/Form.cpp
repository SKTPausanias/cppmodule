/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 16:15:58 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/05 16:07:11 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, const int grade_to_sign_in, const int grade_to_execute):
    _name(name), _is_signed(false), _grade_to_sign_in(grade_to_sign_in), _grade_to_execute(grade_to_execute)
{
    if (_grade_to_sign_in < 1 || _grade_to_execute < 1)
        throw Form::GradeTooHighException();
    else if (_grade_to_sign_in > 150 || _grade_to_execute > 150)
        throw Form::GradeTooHighException();
}

Form::~Form()
{
}

Form::Form(const Form &c):
    _name(c._name), _grade_to_sign_in(c._grade_to_sign_in), _grade_to_execute(c._grade_to_execute)
{
    *this = c;
    if (_grade_to_sign_in < 1 || _grade_to_execute < 1)
        throw Form::GradeTooHighException();
    else if (_grade_to_sign_in > 150 || _grade_to_execute > 150)
        throw Form::GradeTooHighException();
}

Form &Form::operator=(const Form &c)
{
    this->_is_signed = c._is_signed;
    return *this;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "FormException: Grade too High";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "FormException: Grade too Low";
}

const std::string &Form::getName() const
{
    return _name;
}

bool Form::isSigned() const
{
    return _is_signed;
}

int Form::getGradeToSignIn() const
{
    return _grade_to_sign_in;
}

int Form::getGradeToExecute() const
{
    return _grade_to_execute;
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
    if (bureaucrat.getGrade() > this->_grade_to_sign_in)
        throw Form::GradeTooLowException();
    this->_is_signed = true;
}

std::ostream &operator<<(std::ostream &out, Form const &form)
{
    out << "Form named " << form.getName() << (form.isSigned() ? " (Signed)" : " (Unsigned)")
    << " GradeToSign: " << form.getGradeToSignIn() << ". GradeToExecute: " << form.getGradeToExecute();
    return out;
}