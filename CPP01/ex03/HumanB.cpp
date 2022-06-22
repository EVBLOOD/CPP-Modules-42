/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 10:53:26 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/22 11:04:11 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"
#include <iostream>

// HumanB::HumanB(Weapon *x, std::string name)
// {
//    this->slah = x;
//     this->name = name;
// }

HumanB::~HumanB()
{
}

void    HumanB::attacks(void)
{
    std::cout << this->name << " attacks with their " << this->slah.getType() << "\n";
}