/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 18:55:57 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/25 16:02:30 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
private:
    unsigned int _n;
    std::vector<int> _vec;

    Span();
public:
    Span(unsigned int n);
    ~Span();
    Span(const Span &c);
    Span &operator=(const Span &c);

    class maxStoredReachedException : public std::exception {
        virtual const char *what() const throw();
    };

    class notSpanException : public std::exception {
        virtual const char* what() const throw();
    };
    
    void addNumber(int num);
    int shortestSpan();
    int longestSpan();
};

#endif