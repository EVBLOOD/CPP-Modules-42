/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:10:51 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/29 17:35:18 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
    public:
        AMateria* clone() const;
        Ice *operator=(Ice &x);
        Ice();
        Ice(std::string ok);
        Ice(Ice &x);
        ~Ice();
        void use(ICharacter& target);
};
