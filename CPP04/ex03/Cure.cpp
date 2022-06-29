/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:45:51 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/29 17:24:04 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure()
{
    
}

Cure::Cure(Cure &x)
{
    (void)x;    
}

Cure::~Cure()
{
}

Cure *Cure::operator=(Cure &x)
{
    (void)x;
    return (this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

AMateria* Cure::clone() const
{
    return new Cure();
}

Cure::Cure(std::string ok) : AMateria(ok)
{
    
}