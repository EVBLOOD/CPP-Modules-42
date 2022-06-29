/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:56:07 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/29 16:53:06 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include <string>
#include "AMateria.hpp"
class Character : ICharacter
{
    private:
    std::string name;
    AMateria *slote[4];
    int       equipMAt;
    public:
        Character();
        Character(std::string name);
        Character(Character &x);
        Character *operator=(Character &x);
        ~Character();
        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
};
