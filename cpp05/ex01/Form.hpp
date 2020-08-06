/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 16:16:01 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/05 16:06:12 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
class Form;

#include "Bureaucrat.hpp"

class Form
{
private:
    const std::string _name;
    bool _is_signed;
    const int _grade_to_sign_in;
    const int _grade_to_execute;
public:
    Form(const std::string name, const int grade_to_sign_in, const int grade_to_execute);
    ~Form();
    Form(const Form &c);
    Form &operator=(const Form &c);

    class GradeTooHighException: public std::exception{
        virtual const char* what() const throw();
    };
    class GradeTooLowException: public std::exception {
        virtual const char* what() const throw();
    };

    const std::string &getName() const;
    bool isSigned() const;
    int getGradeToSignIn() const;
    int getGradeToExecute() const;

    void beSigned(Bureaucrat const &bureaucrat);
};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif