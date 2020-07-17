/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 19:20:27 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/17 16:47:13 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		virtual ~Cure();
		Cure(const Cure &c);
		Cure &operator=(const Cure &c);

		Cure* clone() const;
		void use(ICharacter& target);
};

#endif