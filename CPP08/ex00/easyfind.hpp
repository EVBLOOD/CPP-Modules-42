/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 12:12:22 by sakllam           #+#    #+#             */
/*   Updated: 2022/07/24 15:30:53 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &ok ,int _find)
{
    typename T::iterator t;
    t = std::find (ok.begin(), ok.end(), _find);
    if (t == ok.end())
       throw std::invalid_argument( "not found!" );
    return (t);
}

template <typename T>
typename T::const_iterator easyfind(T const &ok ,int _find)
{
    typename T::const_iterator t;
    t = std::find (ok.cbegin(), ok.cend(), _find);
    if (t == ok.end())
       throw std::invalid_argument( "not found!" );
    return (t);
}