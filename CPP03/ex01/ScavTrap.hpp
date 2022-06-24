/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:03:49 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/24 20:23:47 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : ClapTrap
{
    public:
        ~ScavTrap();
        void guardGate();
        ScavTrap(string name);
};



ScavTrap::~ScavTrap()
{
}
