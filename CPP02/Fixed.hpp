/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 21:25:05 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/22 21:31:48 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed
{
private:
    int x;
    static const int y = 8;
public:
    Fixed();
    Fixed(Fixed &x);
    ~Fixed();
    void operator= (const Fixed &x);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

