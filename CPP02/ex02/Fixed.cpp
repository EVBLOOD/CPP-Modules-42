/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 21:24:51 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/24 11:53:56 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>
using std::cout;

Fixed::Fixed() : x(0)
{
    // cout << "Default constructor called\n";
}

Fixed::Fixed(float number)
{
    x =  (int)(roundf(number * powf(2, y)));
}

Fixed::~Fixed()
{
    // cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &x) : x(x.x)
{
    // cout << "Copy constructor called\n";
}

int Fixed::getRawBits( void ) const
{
    // cout << "getRawBits member function called\n";
    return (this->x);
}

void Fixed::setRawBits( int const raw )
{
    // cout << "setRawBits member function called\n";
    this->x = raw;
}

Fixed *Fixed::operator= (const Fixed &x)
{
    if (&x == this)
        return (this);
    // cout << "Copy assignment operator called\n";
    this->x = x.x;
    return (this);
}

float Fixed::toFloat( void ) const
{
    return (float)(x) / powf(2, y);
}

int Fixed::toInt( void ) const
{
    return x / powf(2, y);
}

std::ostream &operator<<(std::ostream &x, Fixed const &name)
{
    return x << name.toFloat();
}

bool operator< (const Fixed& one, const Fixed& two)
{
    return (one.toFloat() < two.toFloat());
}

bool operator> (const Fixed& one, const Fixed& two)
{
    return (one.toFloat() > two.toFloat());
}
bool operator<=(const Fixed& one, const Fixed& two)
{
    return (one.toFloat() <= two.toFloat());
}
bool operator>=(const Fixed& one, const Fixed& two)
{
    return (one.toFloat() >= two.toFloat());
}
bool operator==(const Fixed& one, const Fixed& two)
{
    return (one.toFloat() == two.toFloat());
}
bool operator!=(const Fixed& one, const Fixed& two)
{
    return !(one.toFloat() == two.toFloat());
}

Fixed operator+ (const Fixed &a, const Fixed &b)
{
    float av;

    av = a.toFloat() + b.toFloat();
    Fixed c(av);
    return (c);
}

Fixed operator/ (const Fixed &a, const Fixed &b)
{
    float av;

    av = a.toFloat() / b.toFloat();
    Fixed c(av);
    return (c);
}

Fixed operator- (const Fixed &a, const Fixed &b)
{
    float av;

    av = a.toFloat() - b.toFloat();
    Fixed c(av);
    return (c);
}

Fixed operator* (const Fixed &a, const Fixed &b)
{
    float av;

    av = a.toFloat() * b.toFloat();
    Fixed c(av);
    return (c);
}

Fixed Fixed::operator++(void)
{
    Fixed jdid(++x);
    return (jdid);
}
Fixed Fixed::operator--(void)
{
    Fixed jdid(++x);
    return (jdid);
}
Fixed Fixed::operator++(int)
{
    Fixed jdid(x++);
    return (jdid);
}
Fixed Fixed::operator--(int)
{
    Fixed jdid(x--);
    return (jdid);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a < b)
        return (a);
    return (b);
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a > b)
        return (a);
    return (b);
}