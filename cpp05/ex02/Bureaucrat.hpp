/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 13:38:02 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/10 16:30:37 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat;
#include "Form.hpp"

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
        Bureaucrat();
    public:
        Bureaucrat(const std::string name, int grade);
        virtual ~Bureaucrat();
        Bureaucrat(const Bureaucrat &c);
        Bureaucrat &operator=(const Bureaucrat &c);

        class GradeTooHighException: public std::exception {
            virtual const char* what() const throw();
        };
        class GradeTooLowException: public std::exception {
            virtual const char* what() const throw();
        };

        const std::string &getName() const;
        int getGrade() const;

        void incrementGrade(void);
        void decrementGrade(void);
        void signForm(Form &form) const;
        void executeForm(Form &form) const;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif