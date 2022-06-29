/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:50:20 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/29 14:53:33 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        virtual AMateria* clone() const;
        Cure *operator=(Cure &x);
        Cure();
        Cure(Cure &x);
        ~Cure();
        virtual void use(ICharacter& target);
};
