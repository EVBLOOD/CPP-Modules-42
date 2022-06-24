/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:56:59 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/24 15:39:06 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("not me!");    
    ClapTrap b("nither this one!");

    a.attack(b.getname());
    b.takeDamage(1);
    a.attack(b.getname());
    b.takeDamage(1);
    a.attack(b.getname());
    b.takeDamage(1);
    a.beRepaired(10);
    b.attack(a.getname());
}