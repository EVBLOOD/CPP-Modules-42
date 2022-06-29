/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:12:05 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/28 22:10:59 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
    // private:
    //     /* data */
    public:
        Cat(std::string t);
        Cat(Cat &a);
        Cat *operator=(Cat &x);
        Cat();
        ~Cat();
        void makeSound(void) const;
};
