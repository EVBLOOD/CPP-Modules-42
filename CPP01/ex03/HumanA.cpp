/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 10:47:56 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/22 11:38:23 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &x) : slah(x)
{
    this->name = name;
}


HumanA::~HumanA()
{
}

void    HumanA::attack(void)
{
    std::cout << this->name << "attacks with their " << this->slah.getType() << "\n";
}