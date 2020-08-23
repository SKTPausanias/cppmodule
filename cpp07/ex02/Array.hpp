/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 20:17:25 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/23 17:06:59 by mlaplana         ###   ########.fr       */
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
    T &operator[](unsigned int index);
    T const &operator[](unsigned int index) const;
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
Array<T>::Array(const Array &c): length(c.length), arr(nullptr)
{
    *this = c;
}

template <class T>
Array<T> &Array<T>::operator=(const Array &c)
{
    if (this->length > 0)
        delete[] this->arr;
    this->arr = nullptr;
    if (c.length > 0)
    {
        this->arr = new T[c.length];
        for (unsigned int i = 0; i < c.length; i++)
            this->arr[i] = c.arr[i];
    }
    this->length = c.length;
    return *this;
}

template <class T>
const char *Array<T>::OutOfBoundException::what() const throw()
{
    return "Index supplied was out of bound!";
}

template <class T>
unsigned int Array<T>::size() const
{
    return this->length;
}

template <class T>
T &Array<T>::operator[](unsigned int index)
{
    if (index >= this->length)
        throw Array::OutOfBoundException();
    return this->arr[index];
}

template <class T>
T const &Array<T>::operator[](unsigned int index) const
{
    if (index >= this->length)
        throw Array::OutOfBoundException();
    return this->arr[index];
}

#endif