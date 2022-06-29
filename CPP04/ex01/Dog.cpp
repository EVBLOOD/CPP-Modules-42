/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:49:24 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/29 10:24:14 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(std::string t)  : Animal("Dog")
{
    std::cout << "Dog: this is a constractor!\n";
    this->dmagh = new Brain();
    if (!this->dmagh)
    {
        std::cout << "Dog: new failure!\n";
        exit (1);
    }
    (void)t;
}

Dog::Dog(Dog &a) : Animal("Dog")
{
    std::cout << "Dog: this is a constractor!\n";
    this->dmagh = new Brain();
    if (!this->dmagh)
    {
        std::cout << "Dog: new failure!\n";
        exit (1);
    }
    (void) a;
}
Dog *Dog::operator=(Dog &x)
{
    (void)x;
    return (this);
}
Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog: this is a constractor!\n";
    this->dmagh = new Brain();
    if (!this->dmagh)
    {
        std::cout << "Dog: new failure!\n";
        exit (1);
    }
}

Dog::~Dog()
{
    std::cout << "Dog: this is a distractor!\n";
    delete this->dmagh;
}

void Dog::makeSound(void) const
{
    std::cout << "Dogs bark :v\n";
}