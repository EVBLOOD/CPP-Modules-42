/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 10:04:03 by sakllam           #+#    #+#             */
/*   Updated: 2022/07/02 10:11:51 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T> 
T max(T x, T y)
{
    if (x > y)
        return (x);
    return (y);
}

template <typename T> 
T min(T x, T y)
{
    if (x < y)
        return (x);
    return (y);
}

template <typename T> 
void swap(T &x, T &y)
{
    T i;

    i = x;
    x = y;
    y = i;
}