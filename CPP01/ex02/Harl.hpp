/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:52:50 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/21 15:33:14 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Harl
{
    private:
        /* data */
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        Harl(/* args */);
        ~Harl();
        void complain( std::string level );
};

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}
