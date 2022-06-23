/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 21:24:51 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/23 16:04:30 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
using std::cout;

Fixed::Fixed() : x(0)
{
    cout << "Default constructor called\n";
}

Fixed::Fixed(float number)
{
    x = static_cast<int>(number) * 256;
}

Fixed::~Fixed()
{
    cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &x) : x(x.x)
{
    cout << "Copy constructor called\n";
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

Fixed *Fixed::operator= (const Fixed &x)
{
    if (&x == this)
        return (this);
    cout << "Copy assignment operator called\n";
    this->x = x.x;
    return (this);
}

float Fixed::toFloat( void ) const
{
    return static_cast<float>(x >> 8) ;
}

int Fixed::toInt( void ) const
{
    return (x / 256);
}

std::ostream &operator<<(std::ostream &x, Fixed const &name)
{
    return x << name.toFloat();
}