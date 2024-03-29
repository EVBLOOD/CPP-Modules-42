/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:03:49 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/28 20:04:55 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ~ScavTrap();
        void guardGate();
        ScavTrap(string name, int energy_points, int hit_points, int attack_damage);
};



ScavTrap::~ScavTrap()
{
}
