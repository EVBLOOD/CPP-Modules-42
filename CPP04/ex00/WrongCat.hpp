/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:12:05 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/28 22:17:49 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    // private:
    //     /* data */
    public:
        WrongCat(std::string t);
        WrongCat(WrongCat &a);
        WrongCat *operator=(WrongCat &x);
        WrongCat();
        ~WrongCat();
        void makeSound(void) const;
};
