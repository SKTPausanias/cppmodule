/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 13:22:07 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/07 12:38:10 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
    /* data */
public:
    ShrubberyCreationForm(/* args */);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &c);

    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &c);
};

#endif