/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 18:55:51 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/25 16:04:02 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <limits.h>

Span::Span(unsigned int n): _n(n), _vec()
{    
}

Span::~Span()
{
}

Span::Span(const Span &c): _n(c._n), _vec(c._vec)
{
}

Span &Span::operator=(const Span &c)
{
    _n = c._n;
    _vec = c._vec;
    return *this;
}

void Span::addNumber(int num)
{
    if (_vec.size() >= _n)
        throw Span::maxStoredReachedException();
    _vec.push_back(num);    
}

int Span::shortestSpan()
{
    if (_n <= 1)
        throw Span::notSpanException();
    int min = INT_MAX;
    std::vector<int> copy = std::vector<int>(_vec);
    std::sort(copy.begin(), copy.end());

    for (unsigned int i = 0; i < _vec.size() - 1; i++)
    {
        int diff = std::abs(copy[i + 1] - copy[i]);
        if (diff < min)
            min = diff;
    }
    return min;
}

int Span::longestSpan()
{
    if (_n <= 1)
        throw Span::notSpanException();
    return (*std::max_element(_vec.begin(), _vec.end()) - *std::min_element(_vec.begin(), _vec.end()));
}

const char* Span::maxStoredReachedException::what() const throw()
{
    return "already max numbers stored!";
}

const char* Span::notSpanException::what() const throw()
{
    return "there is not Span to find!";
}

