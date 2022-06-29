/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:01:28 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/29 14:54:59 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
    this->types = type;
}

AMateria::AMateria(AMateria & type)
{
    this->types = type.types;
}

AMateria::AMateria()
{
    this->types = "";
}

AMateria *AMateria::operator=(AMateria &x)
{
    // this->types = x.types; doesn't make sence! galoha.
    return (this);
}

AMateria::~AMateria()
{
    
}

std::string const & AMateria::getType() const
{
    return (types);
}

void AMateria::use(ICharacter& target)
{
    (void) target;   
}
