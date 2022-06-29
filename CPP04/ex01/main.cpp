/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 10:58:55 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/29 12:48:18 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    int x = 10;
    Animal **okeh = new Animal*[x];

    for (int i = 0; i < x/2; i++)
        okeh[i] = new Dog();
    for (int i = x/2; i < x; i++)
        okeh[i] = new Cat();
    for (int i = 0; i < x; i++)
        delete okeh[i];
    delete[] okeh;
    // ~not mine~
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // delete j;//should not create a leak
    // delete i;
    // system ("leaks prog");
    return 0;
}