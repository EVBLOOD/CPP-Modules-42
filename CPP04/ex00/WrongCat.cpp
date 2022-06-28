/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:12:10 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/28 22:17:40 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


WrongCat::WrongCat(std::string t)  : WrongAnimal("WrongCat")
{
    (void)t;
}

WrongCat::WrongCat(WrongCat &a) : WrongAnimal("WrongCat")
{
    (void) a;
}
WrongCat *WrongCat::operator=(WrongCat &x)
{
    (void)x;
    return (this);
}
WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    
}

WrongCat::~WrongCat()
{
}

void WrongCat::makeSound(void) const
{
    std::cout << "WrongCats don't bark :v\n";
}