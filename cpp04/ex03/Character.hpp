/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 19:20:21 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/19 13:11:22 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER
#define CHARACTER

#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		Character();
		std::string _name;
		AMateria *inventory[4];
	public:
		Character(std::string const &name);
		virtual ~Character();
		Character(Character const &c);
		Character &operator=(Character const &c);

		std::string const & getName() const;

		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif