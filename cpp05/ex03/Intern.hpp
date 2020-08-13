/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 17:50:49 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/13 19:06:30 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
	Intern();
	virtual ~Intern();
	Intern(const Intern &c);
	Intern &operator=(const Intern &c);

	Form *makeForm(std::string name, std::string target);

	Form *createPresidentialPardonForm(std::string target);
	Form *createRobotomyRequestForm(std::string target);
	Form *createShrubberyCreationForm(std::string target);
};

#endif