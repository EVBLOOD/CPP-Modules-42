/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:45:39 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/28 22:17:26 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

std::string WrongAnimal::getType(void) const
{
    return (this->type);
}

WrongAnimal::WrongAnimal(std::string t)
{
    type = t;
}

WrongAnimal::WrongAnimal(WrongAnimal &a)
{
    type = a.type;
}

void WrongAnimal::setType(std::string type)
{
    this->type = type;
}
WrongAnimal *WrongAnimal::operator=(WrongAnimal &x)
{
    x.type = this->type;
    return (this);
}
WrongAnimal::WrongAnimal()
{
    
}
WrongAnimal::~WrongAnimal()
{
    
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "eeeeeeh!\n";
}