/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:56:59 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/28 20:05:16 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap a("not me!");    
    FragTrap b("nither this one!");

    a.attack(b.getname());
    b.takeDamage(1);
    a.attack(b.getname());
    b.takeDamage(1);
    a.attack(b.getname());
    b.takeDamage(1);
    a.beRepaired(10);
    b.attack(a.getname());
    a.highFivesGuys();
    b.highFivesGuys();
}