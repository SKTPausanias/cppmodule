/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 13:22:04 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/07 12:27:31 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
class RobotomyRequestForm : public Form
{
private:
public:
    RobotomyRequestForm(/* args */);
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &c);
    
    RobotomyRequestForm &operator=(const RobotomyRequestForm &c);
};

#endif