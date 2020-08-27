/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 22:37:49 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/27 22:53:31 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack()
    {
    }
    
    virtual ~MutantStack()
    {
    }
    
    MutantStack(const MutantStack &other): std::stack<T>(other)
    {
        *this = other;
    }
    
    MutantStack &operator=(const MutantStack<T> &other)
    {
        this->c = other.c;
        return *this;
    }

    typedef typename std::stack<T>::container_type::iterator iterator;

    iterator begin()
    {
        return std::stack<T>::c.begin();
    }

    iterator end()
    {
        return std::stack<T>::c.end();
    }
};

#endif