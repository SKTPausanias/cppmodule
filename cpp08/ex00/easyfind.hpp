/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 01:20:57 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/24 15:12:43 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <vector>

template <typename T>
typename T::iterator easyfind(T &arg1, int arg2)
{
    return(std::find(arg1.begin(), arg1.end(), arg2));
}

#endif