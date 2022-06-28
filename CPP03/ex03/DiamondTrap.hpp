/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:46:30 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/28 19:56:39 by sakllam          ###   ########.fr       */
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
        void whoAmI();
        DiamondTrap();
        DiamondTrap(std::string name);
        ~DiamondTrap();
        void attack(std::string scar);
};
