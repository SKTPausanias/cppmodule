/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 18:04:05 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/19 19:29:03 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"
#include <iostream>

static std::string array = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
static size_t l = array.length();

void *serialize(void)
{
	char *raw = new char[20];
	void *ptr = raw;
	for (size_t i = 0; i < 8; i++)
		raw[i] = array[rand() % l];
	*reinterpret_cast<int*>(raw + 8) = rand();
	for (size_t i = 12; i < 20; i++)
		raw[i] = array[rand() % l];
	return ptr;
}

Data *deserialize(void *raw)
{
	Data *d = new Data;

	d->s1 = std::string(static_cast<char*>(raw), 8);
	d->n = *static_cast<int*>(raw) + 8;
	d->s2 = std::string(static_cast<char*>(raw) + 12, 8);

	return d;
}

int main()
{
	srand(time(NULL));

	void *ptr = serialize();
	Data *d = deserialize(ptr);
	std::cout << "string s1: " << d->s1 << std::endl;
	std::cout << "int: " << d->n << std::endl;
	std::cout << "string s2: " << d->s2 << std::endl;

	delete static_cast<char*>(ptr);
	delete d;
}