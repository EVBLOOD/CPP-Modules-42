/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:56:59 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/28 12:32:09 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("not me!");    
    ScavTrap b("nither this one!");

    a.attack(b.getname());
    b.takeDamage(1);
    a.guardGate();
    a.attack(b.getname());
    b.takeDamage(1);
    a.attack(b.getname());
    b.takeDamage(1);
    a.beRepaired(10);
    b.attack(a.getname());
    b.guardGate();
}