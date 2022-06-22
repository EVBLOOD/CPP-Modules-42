/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:21:22 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/22 18:55:07 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

using std::cout;

typedef void (Harl::*fnc)(void);

void Harl::debug( void )
{
    cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}
void Harl::info( void )
{
    cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}
void Harl::warning( void )
{
    cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}
void Harl::error( void )
{
    cout << "This is unacceptable! I want to speak to the manager now.\n";   
}

void    Harl::empty(void)
{
    std::cout << "Error no such function\n";
}

void Harl::complain( std::string level )
{
    fnc fn[] = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error, &Harl::empty}; 
    std::string str[] = {"debug", "info", "warning", "error"};
    int i = 0;    
    while (i < 4 && level != str[i])
    {
        i++;
    }
    (this->*fn[i])();
}