/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 22:37:44 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/27 23:02:45 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include "mutantstack.hpp"

int main(){
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(18);
	mstack.push(123);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while(it != ite){
		std::cout << *it << std::endl;
        ++it;
	}
	
    MutantStack<int> s(mstack);

    MutantStack<int> stack;
    stack.push(42);
    stack.push(24);
    MutantStack<int>::iterator it2 = stack.begin();
    MutantStack<int>::iterator ite2 = stack.end();

    while (it2 != ite2) {
        std::cout << *it2 << std::endl;
        it2++;
    }
    it2 -= 2;
    std::cout << *it2 << std::endl;
}