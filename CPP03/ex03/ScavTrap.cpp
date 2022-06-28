/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:03:46 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/28 17:58:47 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(string name, int energy_points, int hit_points, int attack_damage) : ClapTrap(name, energy_points, hit_points, attack_damage) 
{
    cout << "this constrac.. has been called!\n";
}

void    ScavTrap::guardGate()
{
    cout << "ScavTrap " << this->getname() << " is now in Gate keeper mode.\n";
}

ScavTrap::ScavTrap()
{
    
}

ScavTrap::~ScavTrap()
{
}


