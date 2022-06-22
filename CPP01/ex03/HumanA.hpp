/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 10:45:39 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/22 11:38:27 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon &slah;
public:
    void attack(void);
    HumanA(std::string name, Weapon &x);
    ~HumanA();
};

