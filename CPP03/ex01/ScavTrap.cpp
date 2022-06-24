/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:03:46 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/24 20:23:14 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(string name) : ClapTrap(name, 50, 100, 20) 
{
    cout << "ScavTrap: this constrac.. has been called!\n";
}

void    ScavTrap::guardGate()
{
    cout << "ScavTrap " << this->getname() << " is now in Gate keeper mode.\n";
}

ScavTrap::~ClapTrap()
{
    cout << "ScavTrap: this dconstrac.. has been called!\n";
}

