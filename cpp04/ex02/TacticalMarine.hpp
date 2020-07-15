/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 18:26:25 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/15 18:23:05 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine();
		virtual ~TacticalMarine();
		TacticalMarine(const TacticalMarine &c);
		TacticalMarine &operator=(const TacticalMarine &c);
		
		ISpaceMarine *clone(void) const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
};

#endif