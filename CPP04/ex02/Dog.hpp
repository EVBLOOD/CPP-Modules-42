/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:49:20 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/28 22:10:43 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
    // private:
    //     /* data */
    public:
        Dog(std::string t);
        Dog(Dog &a);
        Dog *operator=(Dog &x);
        Dog();
        ~Dog();
        void makeSound(void) const;
};
