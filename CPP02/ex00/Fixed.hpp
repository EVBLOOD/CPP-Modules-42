/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 21:25:05 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/23 15:35:06 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed
{
private:
    int x;
    static const int y = 8;
public:
    Fixed();
    Fixed(const Fixed &x);
    ~Fixed();
    Fixed *operator= (const Fixed &x);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

