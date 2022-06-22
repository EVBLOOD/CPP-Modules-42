/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 10:47:56 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/22 11:05:35 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(Weapon *x, std::string name)
{
    this->slah = x;
    this->name = name;
}

HumanA::~HumanA()
{
}

void    HumanA::attack(void)
{
    std::cout << this->name << "attacks with their " << this->slah->getType() << "\n";
}