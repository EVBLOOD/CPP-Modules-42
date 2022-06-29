/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:10:51 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/29 14:52:06 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
    public:
        virtual AMateria* clone() const;
        Ice *operator=(Ice &x);
        Ice();
        Ice(Ice &x);
        ~Ice();
        virtual void use(ICharacter& target);
};
