/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:56:07 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/29 17:36:09 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include <string>
#include "AMateria.hpp"
class Character : public ICharacter
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
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};
