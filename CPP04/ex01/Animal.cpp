/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:45:39 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/29 10:16:45 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

std::string Animal::getType(void) const
{
    return (this->type);
}

Animal::Animal(std::string t)
{
    std::cout << "Animal: this is a constractor!\n";
    type = t;
}

Animal::Animal(Animal &a)
{
    std::cout << "Animal: this is a constractor!\n";
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
    std::cout << "Animal: this is a constractor!\n";
}
Animal::~Animal()
{
    std::cout << "Animal: this is a distractor!\n";
}

void Animal::makeSound(void) const
{
    std::cout << "eeeeeeh!\n";
}