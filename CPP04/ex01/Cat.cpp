/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:12:10 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/29 10:24:56 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat(std::string t)  : Animal("Cat")
{
    this->dmagh = new Brain();
    if (!this->dmagh)
    {
        std::cout << "Cat: new failure!\n";
        exit (1);
    }
    std::cout << "Cat: this is a constractor!\n";
    (void)t;
}

Cat::Cat(Cat &a) : Animal("Cat")
{
    this->dmagh = new Brain();
    if (!this->dmagh)
    {
        std::cout << "Cat: new failure!\n";
        exit (1);
    }
    std::cout << "Cat: this is a constractor!\n";
    (void) a;
}
Cat *Cat::operator=(Cat &x)
{
    (void)x;
    return (this);
}
Cat::Cat() : Animal("Cat")
{
    this->dmagh = new Brain();
    if (!this->dmagh)
    {
        std::cout << "Cat: new failure!\n";
        exit (1);
    }
    std::cout << "Cat: this is a constractor!\n";
}

Cat::~Cat()
{
    delete this->dmagh;
    std::cout << "Cat: this is a distractor!\n";
}

void Cat::makeSound(void) const
{
    std::cout << "cats don't bark :v\n";
}