/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warrior.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 00:51:26 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/14 00:54:16 by mlaplana         ###   ########.fr       */
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
    ~Warrior();
    Warrior(const Warrior &c);
    Warrior &operator=(const Warrior &c);

    virtual void getPolymorphed() const;
};

#endif