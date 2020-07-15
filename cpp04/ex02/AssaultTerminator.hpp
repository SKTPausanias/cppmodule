/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 18:25:56 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/15 18:29:36 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator();
		virtual ~AssaultTerminator();
		AssaultTerminator(const AssaultTerminator &c);
		AssaultTerminator &operator=(const AssaultTerminator &c);
		
		ISpaceMarine *clone(void) const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
};

#endif