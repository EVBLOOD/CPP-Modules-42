/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 13:45:53 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/24 17:57:24 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(string name) : energy_points(10), hit_points(10), attack_damage(0)
{
    cout << "the constrac.. has been called!\n";
    this->name = name;
}

ClapTrap::~ClapTrap()
{
    cout << "the deconstrac.. has been called!\n";
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->energy_points == 0)
    {
        cout << "ClapTrap " << this->name << " no energy points was left\n";
        return ;
    }
    this->energy_points--;
    if (this->hit_points == 0)
    {
        cout << "ClapTrap " << this->name << " is already died\n";
        return ;
    }
    this->hit_points--;
    cout << "ClapTrap " << this->name << " attacks " << target << " , causing " << this->attack_damage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->hit_points -= amount;
    cout << "ClapTrap " << this->name << " toke dammage " << amount << "\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy_points == 0)
    {
        cout << "ClapTrap " << this->name << " no energy points was left\n";
        return ;
    }
    this->energy_points--;
    cout << "ClapTrap " << this->name << " was repaired by " << amount << "\n";
}

string ClapTrap::getname(void) const
{
    return (this->name);
}