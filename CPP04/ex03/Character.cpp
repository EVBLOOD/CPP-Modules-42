/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 16:49:35 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/29 18:34:29 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character() : name(""), equipMAt(0)
{
    slote[0] = NULL;
    slote[1] = NULL;
    slote[2] = NULL;
    slote[3] = NULL;
}
Character::Character(std::string name) : name(name), equipMAt(0)
{
    slote[0] = NULL;
    slote[1] = NULL;
    slote[2] = NULL;
    slote[3] = NULL;
}
Character::Character(Character &x) : name(x.name), equipMAt(x.equipMAt)
{
    for (int i = 0; i < 4; i++)
    {
        if (x.slote[i])
          this->slote[i] = x.slote[i]->clone();
        else
         this->slote[i] = NULL;
    }
}
Character *Character::operator=(Character &x)
{
    if (&x == this)
        return (this);
    this->equipMAt = x.equipMAt;
    this->name = x.name;
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
Character::~Character()
{
    for (int i = 0; i < this->equipMAt; i++)
    {
        delete this->slote[i];
    }
}

std::string const &Character::getName() const
{
    return (this->name);
}
void Character::equip(AMateria* m)
{
    if (equipMAt == 4)
    {
        std::cout << "I'm full!\n";
        return ;
    }
    this->slote[equipMAt] = m;
    equipMAt++;
}

void Character::unequip(int idx)
{
    if (idx >= equipMAt || idx < 0)
        return;
    for (int i = idx; i < equipMAt - 1; i++)
    {
        // 0 <- 1
        slote[i] = slote[i + 1];
    }
    equipMAt--;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= equipMAt || idx < 0)
        return;
    slote[idx]->use(target);
}