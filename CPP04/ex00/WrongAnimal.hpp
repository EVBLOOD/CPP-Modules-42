/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:33:37 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/28 22:33:14 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        std::string getType(void) const;
        WrongAnimal(std::string t);
        WrongAnimal(WrongAnimal &a);
        void setType(std::string type);
        WrongAnimal *operator=(WrongAnimal &x);
        WrongAnimal();
        ~WrongAnimal();
        void makeSound(void) const;
};
