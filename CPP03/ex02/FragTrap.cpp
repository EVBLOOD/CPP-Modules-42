/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 20:18:24 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/24 20:44:10 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::~FragTrap()
{
    cout << "FlaTrap: the deconst... was called\n";
}

FragTrap::FragTrap(string name) : ClapTrap(name, 100, 100, 30)
{
    cout << "FlaTrap: the conster... was called\n";
}

void FragTrap::highFivesGuys(void)
{
    cout << "High fives guys!!!!!!!\n";
}