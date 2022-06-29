/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:49:20 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/29 11:49:51 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain   *dmagh;
    public:
        Dog(std::string t);
        Dog(Dog &a);
        Dog *operator=(Dog &x);
        Dog();
        ~Dog();
        void makeSound(void) const;
};
