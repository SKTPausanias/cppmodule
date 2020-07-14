/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 01:23:04 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/14 17:40:40 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>
#include <iostream>
class Enemy
{
    private:
        Enemy();
    protected:
        int _hp;
        std::string _type;
    public:
        Enemy(int hp, std::string const & type);
        virtual ~Enemy();
        Enemy(const Enemy &c);
        Enemy &operator=(const Enemy &c);
        
        std::string const &getType() const;
        int getHP() const;
        virtual void takeDamage(int damage);
};

#endif