/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 17:50:49 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/10 18:12:59 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include "Form.hpp"

class Intern
{
private:
public:
	Intern();
	virtual ~Intern();
	Intern(const Intern &c);
	Intern &operator=(const Intern &c);

	Form *makeForm(std::string name, std::string target);
};

#endif