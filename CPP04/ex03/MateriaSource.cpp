/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:09:27 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/29 18:34:53 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < this->equipMAt; i++)
    {
        delete this->slote[i];
    }
}

MateriaSource::MateriaSource() :  equipMAt(0)
{
    slote[0] = NULL;
    slote[1] = NULL;
    slote[2] = NULL;
    slote[3] = NULL;
}

MateriaSource::MateriaSource(MateriaSource &x) : equipMAt(x.equipMAt)
{
    for (int i = 0; i < 4; i++)
    {
        if (x.slote[i])
          this->slote[i] = x.slote[i]->clone();
        else
         this->slote[i] = NULL;
    }
}
MateriaSource *MateriaSource::operator=(MateriaSource &x)
{
    if (&x == this)
        return (this);
    this->equipMAt = x.equipMAt;
    for (int i = 0; i < 4; i++)
    {
        delete this->slote[i];
        if (x.slote[i])
        {
            this->slote[i] = x.slote[i]->clone();
        }
        else
         this->slote[i] = NULL;
    }
    return (this);
}

void MateriaSource::learnMateria(AMateria* x)
{
    if (equipMAt == 4)
        return ;
    this->slote[equipMAt] = x;
    equipMAt++;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    AMateria *x = NULL;
    if (type == "cure")
        x = new Cure(type);
    else if (type == "ice")
        x = new Ice(type);
    return (x);
}