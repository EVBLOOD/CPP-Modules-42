/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:56:59 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/28 19:59:27 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
  DiamondTrap m1("robot1");
  m1.attack("Robot2");
  m1.attack("Robot2");
  m1.takeDamage(20);
  m1.guardGate();
  m1.guardGate();
  m1.highFivesGuys();
  m1.whoAmI();
}