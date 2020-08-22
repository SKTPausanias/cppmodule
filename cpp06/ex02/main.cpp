/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 15:20:38 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/22 15:52:47 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base *generate(void)
{
    int n = rand() % 3;
    if (n == 0)
        return new A;
    if (n == 1)
        return new B;
    return new C;
}

void identify_from_pointer(Base * p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;   
}

void identify_from_reference( Base & p)
{
    identify_from_pointer(&p);
}

int main()
{
    srand(time(NULL));
    
    for (size_t i = 0; i < 30; i++)
    {
        Base *o = generate();
        identify_from_pointer(o);
        identify_from_reference(*o);
        std::cout << "\n";
        delete o;
    }
}