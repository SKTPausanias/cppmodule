/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAsteroid.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 13:05:42 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/01 13:12:47 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IASTEROID_HPP
#define IASTEROID_HPP

#include <iostream>

class IAsteroid
{
    public:
        virtual ~IAsteroid() {}
        virtual std::string beMined([...] *) const = 0;
    
        virtual std::string getName() const = 0;
};

#endif