/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:53:01 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/27 10:38:09 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* newone;
    int i;

    if (N <= 0)
    {
        std::cout << "nooop!\n";
        exit (1);
    }
    newone = new Zombie[N];
    if (!newone)
    {
        std::cout << "allocation error!\n";
        exit (1);
    }
    i = 0;
    while (i < N)
    {
        newone[i].setname(name);
        i++;
    }
    return (newone);
}

int main()
{
    int i = 0;
    int N = 6;
    Zombie* testone = zombieHorde(N, "xooom");

    while (i < N)
    {
        testone[i].announce();
        i++;
    }
    delete [] testone;
    return (1);
}