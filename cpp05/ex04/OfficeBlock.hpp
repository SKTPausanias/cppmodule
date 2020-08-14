/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 13:26:52 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/14 19:29:47 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
#define OFFICEBLOCK_HPP

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"
class OfficeBlock
{
private:
    Intern *_intern;
    Bureaucrat *_signer;
    Bureaucrat *_executor; 
public:
    OfficeBlock();
    OfficeBlock(Intern &intern, Bureaucrat &signer, Bureaucrat &executor);
    ~OfficeBlock();
    class NoInternException : public std::exception {
        virtual const char *what() const throw();
    };

    class NoSignerException : public std::exception {
        virtual const char *what() const throw();
    };

    class NoExecutorException : public std::exception {
        virtual const char *what() const throw();
    };

    void setIntern(Intern &intern);
    void setSigner(Bureaucrat &signer);
    void setExecutor(Bureaucrat &executor);

    void doBureaucracy(std::string name, std::string target) const;
};

#endif