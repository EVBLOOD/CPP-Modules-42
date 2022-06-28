/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:37:41 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/28 20:01:08 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name", 50, 50, 96), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), name(name)
{
    std::cout << "DiamondTrap -> " << name << "constrector was called!\n";
}

void DiamondTrap::attack(std::string scar)
{
    std::cout << "Diamond -> " ;
    this->ScavTrap::attack(scar);
}

void DiamondTrap::whoAmI()
{
    std::cout << "I'm " << this->name << " and " << ClapTrap::getname() << "\n";
}


DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap end\n";
}
