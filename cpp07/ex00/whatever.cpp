/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 16:37:43 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/22 17:35:32 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename myType>
void swap(myType &arg1, myType &arg2) {
    myType aux;
    aux = arg1;
    arg1 = arg2;
    arg2 = aux;
}

template <typename myType>
myType &min(myType &arg1, myType &arg2) {
    return (arg1 < arg2 ? arg1 : arg2);
}

template <typename myType>
myType &max(myType &arg1, myType &arg2) {
    return (arg1 > arg2 ? arg1 : arg2);
}

int main()
{
    int a = 2;
    int b = 3;
    
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min(a, b) = " << ::min( a, b ) << std::endl;
    std::cout << "max(a, b) = " << ::max( a, b ) << std::endl;
    
    std::string c = "chaine1";
    std::string d = "chaine2";
    
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min(c, d) = " << ::min( c, d ) << std::endl;
    std::cout << "max(c, d) = " << ::max( c, d ) << std::endl;

    std::cout << "\n";
	std::string e = "cad";
	std::string f = "cad";

	std::cout << "e = " << e << ", f = " << f << std::endl;
	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "f -> " << &f  << std::endl;

	std::cout << "min(e, f) = " << ::min(e, f) << " (" << &::min(e, f) << ")" << std::endl;
	std::cout << "max(e, f) = " << ::max(e, f) << " (" << &::max(e, f) << ")" << std::endl;
}

