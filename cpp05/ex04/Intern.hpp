/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 17:50:49 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/14 12:38:46 by mlaplana         ###   ########.fr       */
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

	Form *makeForm(std::string name, std::string const &target);

	Form *createPresidentialPardonForm(std::string const &target);
	Form *createRobotomyRequestForm(std::string const &target);
	Form *createShrubberyCreationForm(std::string const &target);
};

#endif