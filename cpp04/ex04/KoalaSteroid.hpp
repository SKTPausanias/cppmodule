/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KoalaSteroid.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 13:05:50 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/03 13:06:23 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KOALASTEROID_HPP
#define KOALASTEROID_HPP

#include "IAsteroid.hpp"

class KoalaSteroid: public IAsteroid
{
private:
	std::string name;
public:
	KoalaSteroid();
	KoalaSteroid(std::string const &name);
	KoalaSteroid(KoalaSteroid const &other);
	virtual ~KoalaSteroid();

	KoalaSteroid &operator=(KoalaSteroid const &other);

	std::string getName(void) const;

	std::string beMined(DeepCoreMiner *laser) const;
	std::string beMined(StripMiner *laser) const;
};

#endif