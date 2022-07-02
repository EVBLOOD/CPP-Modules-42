/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:12:47 by sakllam           #+#    #+#             */
/*   Updated: 2022/07/02 15:27:53 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int Span::shortestSpan(void) const
{
    int min = abs(vec[0] - vec[1]);
    for (size_t i = 0; i < vec.size() - 1; i++)
    {
        for (size_t j =  i + 1; j < vec.size(); j++)
        {
            min = (abs(vec[i] - vec[j]) < min) ? abs(vec[i] - vec[j]) : min;
        }
    }
    return (min);
}

int Span::longestSpan(void) const
{
    int max = *std::max_element(vec.begin(), vec.end());
    int min = *std::min_element(vec.begin(), vec.end());
    return (max - min);
}

Span::Span()
{
}

void Span::addNumber(int nbr)
{
    if (vec.size() >= (size_t)size)
        throw std::invalid_argument( "out of size" );
    vec.push_back(nbr);
}

Span::Span(int sv)
{
    this->size = sv;
}

Span::~Span()
{
}

void Span::addNumber(std::vector<int>::iterator begin,
                        std::vector<int>::iterator end)
{
    for (std::vector<int>::iterator it = begin; 
        it != end; it++)
    {
        vec.push_back(*it);
    }
}