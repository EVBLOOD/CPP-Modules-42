/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 16:52:06 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/29 17:10:34 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
       AMateria *slote[4];
       int      equipMAt;
    public:
        MateriaSource();
        MateriaSource(MateriaSource &x);
        MateriaSource *operator=(MateriaSource &x);
        ~MateriaSource();
        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);
};

void MateriaSource::learnMateria(AMateria*)
{
    
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    
}