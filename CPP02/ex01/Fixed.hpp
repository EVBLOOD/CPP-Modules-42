/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:12:28 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/23 14:13:16 by sakllam          ###   ########.fr       */
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

