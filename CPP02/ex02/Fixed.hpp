/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 21:25:05 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/23 22:32:46 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
    private:
        int x;
        static const int y = 8;
    public:
        Fixed();
        Fixed(float number);
        Fixed(const Fixed &x);
        ~Fixed();
        Fixed *operator= (const Fixed &x);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        // Fixed *operator> (const Fixed &x);
        // Fixed *operator< (const Fixed &x);
        // Fixed *operator>= (const Fixed &x);
        // Fixed *operator<= (const Fixed &x);
        // Fixed *operator== (const Fixed &x);
        // Fixed *operator!= (const Fixed &x);
        // bool operator< (const Fixed& one, const Fixed& two);
        //The 6 comparison operators: >, <, >=, <=, == and !=.
};

bool operator> (const Fixed& one, const Fixed& two);
bool operator<=(const Fixed& one, const Fixed& two);
bool operator>=(const Fixed& one, const Fixed& two);
bool operator==(const Fixed& one, const Fixed& two);
bool operator!=(const Fixed& one, const Fixed& two);
std::ostream &operator<<(std::ostream &x, const Fixed &name);
bool operator< (const Fixed& one, const Fixed& two);
Fixed operator+ (const Fixed &a, const Fixed &b);
Fixed operator/ (const Fixed &a, const Fixed &b);
Fixed operator- (const Fixed &a, const Fixed &b);
Fixed operator* (const Fixed &a, const Fixed &b);