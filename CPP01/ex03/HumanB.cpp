/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 10:53:26 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/22 11:27:43 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"
#include <iostream>

HumanB::HumanB()
{
    
}
HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::~HumanB()
{
}

 void    HumanB::setWeapon(Weapon &slah)
 {
    this->slah = slah;  
 }

void    HumanB::attack(void)
{
    std::cout << this->name << " attacks with their " << this->slah.getType() << "\n";
}