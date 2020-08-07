/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 13:21:58 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/07 14:12:46 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <string>

class PresidentialPardonForm : public Form
{
private:
    PresidentialPardonForm();
    std::string _target;
public:
    PresidentialPardonForm(std::string target);
    ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &c);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &c);

    void execute(Bureaucrat const & executor);
};

#endif