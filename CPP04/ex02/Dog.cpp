/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:49:24 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/28 22:11:23 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(std::string t)  : Animal("Dog")
{
    (void)t;
}

Dog::Dog(Dog &a) : Animal("Dog")
{
    (void) a;
}
Dog *Dog::operator=(Dog &x)
{
    (void)x;
    return (this);
}
Dog::Dog() : Animal("Dog")
{
    
}

Dog::~Dog()
{
}

void Dog::makeSound(void) const
{
    std::cout << "Dogs bark :v\n";
}