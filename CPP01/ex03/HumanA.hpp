/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 10:45:39 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/22 11:04:55 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon *slah;
public:
    void attack(void);
    HumanA(Weapon *x, std::string name);
    ~HumanA();
};

