/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 19:20:12 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/19 22:29:24 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;
class AMateria
{
	private:
		AMateria();
	protected:
		unsigned int _xp;
		std::string _type;
	public:
		AMateria(std::string const & type);
		virtual ~AMateria();
		AMateria(const AMateria &c);
		AMateria &operator=(const AMateria &c);

		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP
		virtual AMateria *clone(void) const = 0;
		virtual void use(ICharacter& target);
};

#endif