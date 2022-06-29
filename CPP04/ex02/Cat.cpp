/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:12:10 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/28 22:11:17 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat(std::string t)  : Animal("Cat")
{
    (void)t;
}

Cat::Cat(Cat &a) : Animal("Cat")
{
    (void) a;
}
Cat *Cat::operator=(Cat &x)
{
    (void)x;
    return (this);
}
Cat::Cat() : Animal("Cat")
{
    
}

Cat::~Cat()
{
}

void Cat::makeSound(void) const
{
    std::cout << "cats don't bark :v\n";
}