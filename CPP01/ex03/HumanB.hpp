/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 10:52:12 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/22 11:27:01 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon slah;
        std::string name;
    public:
        void    setWeapon(Weapon &slah);
        void attack(void);
        HumanB(std::string name);
        HumanB();
        ~HumanB();
};

