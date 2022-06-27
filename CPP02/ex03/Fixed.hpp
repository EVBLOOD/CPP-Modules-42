/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 21:25:05 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/24 11:08:07 by sakllam          ###   ########.fr       */
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
        Fixed operator++(void);
        Fixed operator--(void);
        Fixed operator++(int);
        Fixed operator--(int);
        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(Fixed const &a, Fixed const &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(Fixed const &a, Fixed const &b);
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