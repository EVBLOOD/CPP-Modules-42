/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 21:24:51 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/23 14:08:02 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
using std::cout;

Fixed::Fixed()
{
    cout << "Default constructor called\n";
    this->x = 0;
}


Fixed::~Fixed()
{
    cout << "Destructor called\n";
}

Fixed::Fixed(Fixed &x)
{
    cout << "Copy constructor called\n";
    this->x = x.x;
}

int Fixed::getRawBits( void ) const
{
    cout << "getRawBits member function called\n";
    return (this->x);
}

void Fixed::setRawBits( int const raw )
{
    cout << "setRawBits member function called\n";
    this->x = raw;
}

void Fixed::operator= (const Fixed &x)
{
    cout << "Copy assignment operator called\n";
    this->x = x.x;
}
