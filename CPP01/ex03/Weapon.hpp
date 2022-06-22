/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 10:40:07 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/22 11:32:32 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Weapon
{
private:
   std::string type;
public:
    const std::string &getType(void) const;
    void setType(std::string type);
    Weapon(std::string name);
    Weapon();
    ~Weapon();
};

