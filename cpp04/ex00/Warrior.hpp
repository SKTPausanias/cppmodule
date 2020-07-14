/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warrior.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 00:51:26 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/14 18:37:02 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARRIOR_HPP
#define WARRIOR_HPP

#include "Victim.hpp"

class Warrior : public Victim
{
private:
    Warrior();
public:
    Warrior(std::string name);
    virtual ~Warrior();
    Warrior(const Warrior &c);
    Warrior &operator=(const Warrior &c);

    virtual void getPolymorphed() const;
};

#endif