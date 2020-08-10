/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 13:22:04 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/10 16:26:04 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
class RobotomyRequestForm : public Form
{
private:
    RobotomyRequestForm();
    std::string _target;
public:
    RobotomyRequestForm(std::string target);
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &c);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &c);

    void execute(Bureaucrat const & executor) const;
};

#endif