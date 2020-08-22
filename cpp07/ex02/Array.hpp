/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 20:17:25 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/23 00:52:49 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP



template <class T>
class Array
{
private:
    unsigned int length;
    T *arr;
public:
    Array();
    ~Array();
    Array(unsigned int n);
    Array(const Array &c);
    Array &operator=(const Array &c);
    
    class OutOfBoundException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };

    unsigned int size() const;
};

template <class T>
Array<T>::Array(): length(0), arr(nullptr)
{
}

template <class T>
Array<T>::~Array()
{
    delete[] arr;
}

template <class T>
Array<T>::Array(unsigned int n): length(n), arr(new T[n])
{
}

template <class T>
Array<T>::Array(const Array &c)
{
    std::cout << "called\n";
    *this = c;
}

template <class T>
Array<T> &Array<T>::operator=(const Array &c)
{
}

#endif