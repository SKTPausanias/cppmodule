/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 18:26:18 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/15 17:12:49 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad
{
private:
	int count;
	ISpaceMarine** units;
public:
	Squad();
	virtual ~Squad();
	Squad(const Squad &c);
	Squad &operator=(const Squad &c);
	
	int getCount() const;
	ISpaceMarine* getUnit(int) const;
	int push(ISpaceMarine* unit);
};

#endif