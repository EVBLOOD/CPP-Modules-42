/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 14:09:58 by sakllam           #+#    #+#             */
/*   Updated: 2022/07/02 15:14:34 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include <algorithm>
class  Span
{
    private:
        std::vector<int> vec;
        Span();
        int size;
    public:
        void addNumber(int nbr);
        void addNumber(std::vector<int>::iterator begin,
                        std::vector<int>::iterator end);
        Span(int sz);
        ~ Span();
        int shortestSpan(void) const; 
        int longestSpan(void) const;
        
};
