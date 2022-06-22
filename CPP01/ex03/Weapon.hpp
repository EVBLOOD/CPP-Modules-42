/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 10:40:07 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/22 10:45:11 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Weapon
{
private:
   std::string type;
public:
    const std::string &getType(void) const;
    void setType(std::string type);
    Weapon(/* args */);
    ~Weapon();
};

