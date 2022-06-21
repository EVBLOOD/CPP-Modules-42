/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:21:53 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/21 13:37:13 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::~Zombie()
{
    std::cout << this->getname() << ": is died\n";
}

std::string Zombie::getname(void) const
{
    return (this->name);
}
void Zombie::setname(std::string name)
{
    this->name = name;
}

void Zombie::announce( void )
{
   std::cout << this->getname() << ": " << "BraiiiiiiinnnzzzZ...\n";
}