/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 13:41:57 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/24 17:57:15 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

using std::string;
using std::cout;

class ClapTrap
{
    private:
        string name;
        int     hit_points;
        int     energy_points;
        int     attack_damage;
    public:
        ClapTrap::ClapTrap(string name, int energy_points, int hit_points, int attack_damage);
        string getname(void) const;
        ClapTrap(string name);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};