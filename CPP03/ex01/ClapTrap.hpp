/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 13:41:57 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/28 12:33:41 by sakllam          ###   ########.fr       */
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
        ClapTrap(string name, int energy_points, int hit_points, int attack_damage);
        string getname(void) const;
        ClapTrap(string name);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        int    gethitpoint(void) const;
        int    get_energypoints(void) const;
        int    get_attackdamage(void) const;
        void setname(string s);
        void    sethitpoint(int x);
        void    set_energypoints(int x);
        void    set_attackdamage(int x);
        ClapTrap *operator=(ClapTrap &x);
};
