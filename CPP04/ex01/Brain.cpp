/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:51:11 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/29 13:59:07 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
    std::cout << "Brain: this is a constractor!\n";
}

Brain::~Brain()
{
    std::cout << "Brain: this is a distractor!\n";
}

string const *Brain::getIdeas() const
{
    return (this->ideas);
}
void   Brain::setIdeas(string *fikra, int nb)
{
    try
    {
        int i = 0;
        while (i < nb)
        {
            this->ideas[i] = fikra[i];
            i++;
        }
    }
    catch(const std::exception& e)
    {
        std::cout << "Brain: something went wrong!\n";
    } 
}
Brain::Brain(string *ideas, int nb)
{
    std::cout << "Brain: this is a constractor!\n";
    try
    {
       int i = 0;
        while (i < nb)
        {
            this->ideas[i] = ideas[i];
            i++;
        }
    }
    catch(const std::exception& e)
    {
        std::cout << "Brain: something went wrong!\n";
    }
}
Brain::Brain(Brain &afkar)
{
    std::cout << "Brain: this is a constractor!\n";
    try
    {
       int i = 0;
        while (i < 100)
        {
            this->ideas[i] = afkar.ideas[i];
            i++;
        }
    }
    catch(const std::exception& e)
    {
        std::cout << "Brain: something went wrong!\n";
    }
}
Brain *Brain::operator=(Brain &x)
{
    (void) x;
    return (this);
}