/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroKreog.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 13:05:38 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/03 12:54:13 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASTEROKREOG_HPP
#define ASTEROKREOG_HPP

#include "IAsteroid.hpp"
class AsteroKreog: public IAsteroid
{
private:
	std::string name;
public:
	AsteroKreog();
	AsteroKreog(std::string const &name);
	AsteroKreog(AsteroKreog const &other);
	virtual ~AsteroKreog();

	AsteroKreog &operator=(AsteroKreog const &other);

	std::string getName(void) const;

	std::string beMined(DeepCoreMiner *laser) const;
	std::string beMined(StripMiner *laser) const;
};

#endif