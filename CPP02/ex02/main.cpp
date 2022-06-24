/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:12:30 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/24 12:07:20 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

#include <iostream>
int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    // added tests
    std::cout << "\\\\\\\\\\\\\\\\\n";
    Fixed x(1);
    Fixed y(2);
    Fixed &c = Fixed::max(x, y);
    std::cout << x * y << std::endl;
    std::cout << x + y << std::endl;
    std::cout << x - y << std::endl;
    std::cout << x / y << std::endl;
    std::cout << (x > y) << std::endl;
    std::cout << (x >= y) << std::endl;
    std::cout << (x < y) << std::endl;
    std::cout << (x <= y) << std::endl;
    std::cout << c << std::endl;
    c = Fixed::min(x, y);
    std::cout << c << std::endl;
    return 0;
}