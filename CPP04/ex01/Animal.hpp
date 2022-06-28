/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:33:37 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/28 22:43:10 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Brain.hpp"
#include <string>
#include <iostream>

class Animal
{
    protected:
        std::string type;
        Brain       dmagh;
    public:
        std::string getType(void) const;
        Animal(std::string t);
        Animal(Animal &a);
        void setType(std::string type);
        Animal *operator=(Animal &x);
        Animal();
        ~Animal();
        virtual void makeSound(void) const;
};
