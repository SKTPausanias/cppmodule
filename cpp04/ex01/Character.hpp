/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 01:22:58 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/14 13:42:06 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
    private:
        std::string _name;
        Character();
        int _ap;
        AWeapon *weapon;
    public:
        Character(std::string const & name);
        ~Character();
        Character(const Character &c);
        Character &operator=(const Character &c);
        
        void recoverAP();
        void equip(AWeapon*);
        void attack(Enemy*);
        
        std::string const &getName() const;
};

#endif