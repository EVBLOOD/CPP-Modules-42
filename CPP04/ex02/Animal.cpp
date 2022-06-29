/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:45:39 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/29 12:53:55 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

std::string Animal::getType(void) const
{
    return (this->type);
}

Animal::Animal(std::string t)
{
    type = t;
}

Animal::Animal(Animal &a)
{
    type = a.type;
}

void Animal::setType(std::string type)
{
    this->type = type;
}
Animal *Animal::operator=(Animal &x)
{
    x.type = this->type;
    return (this);
}
Animal::Animal()
{
    
}
Animal::~Animal()
{
    
}
