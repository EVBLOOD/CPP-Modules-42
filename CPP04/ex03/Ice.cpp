/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:17:18 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/29 17:23:53 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    
}

Ice::Ice(Ice &x)
{
    (void)x;    
}

Ice::~Ice()
{
}

Ice::Ice(std::string ok) : AMateria(ok)
{
    
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

AMateria* Ice::clone() const
{
    AMateria* x = new Ice();
    return (x);
}

Ice *Ice::operator=(Ice &x)
{
    (void)x;
    return (this);
}