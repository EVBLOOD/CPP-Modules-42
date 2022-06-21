/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:33:57 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/21 13:47:53 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie* newone;

    newone = new Zombie;

    newone->setname(name);
    return (newone);
}

void randomChump( std::string name )
{
    Zombie newone;

    newone.setname(name);
    newone.announce();
}

int main()
{
    Zombie* testone = newZombie("name");

    testone->announce();
    randomChump("nametwo");
    randomChump("nametree");
    delete testone;
    return (1);
}