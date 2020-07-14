/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 01:22:51 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/14 02:13:59 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <string>
#include <iostream>

class AWeapon
{
protected:
    std::string _name;
    int _apcost;
    int _damage;

    AWeapon();
public:
    AWeapon(std::string const & name, int apcost, int damage);
    ~AWeapon();
    AWeapon(const AWeapon &c);
    AWeapon &operator=(const AWeapon &c);

    std::string getName() const;
    int getAPCost() const;
    int getDamage() const;

    virtual void attack() const = 0;
};

#endif