/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 12:12:22 by sakllam           #+#    #+#             */
/*   Updated: 2022/07/02 13:55:09 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T const &ok ,int _find)
{
    typename T::iterator t;
    t = find (ok.begin(), ok.end(), _find);
    if (t != ok.end())
       throw std::invalid_argument( "not found!" );
    return (t);
}