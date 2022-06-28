/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:46:30 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/28 18:47:43 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class DiamondTrap : virtual public ClapTrap, virtual public FragTrap, virtual public ScavTrap
{
    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        ~DiamondTrap();
};

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap()
{
}

// DiamondTrap::DiamondTrap(/* args */)
// {
// }

/*

Hit points (FragTrap)
Energy points (ScavTrap)
Attack damage (FragTrap)
attack() (Scavtrap)

*/

DiamondTrap::~DiamondTrap()
{
}
