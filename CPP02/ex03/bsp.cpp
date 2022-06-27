/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 20:40:59 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/27 22:57:56 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>

float surf(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float result = roundf((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
    
    if (result < 0)
        return (result * (-1));
    return (result);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float A = surf(a.getX().toFloat(), a.getY().toFloat(), b.getX().toFloat(), b.getY().toFloat(),c.getX().toFloat(), c.getY().toFloat());
    float A1 = surf(point.getX().toFloat(), point.getY().toFloat(), b.getX().toFloat(), b.getY().toFloat(), c.getX().toFloat(), c.getY().toFloat());
    float A2 = surf(a.getX().toFloat(), a.getY().toFloat(), point.getX().toFloat(), point.getY().toFloat(), c.getX().toFloat(), c.getY().toFloat());
    float A3 = surf(a.getX().toFloat(), a.getY().toFloat(), b.getX().toFloat(), b.getY().toFloat(), point.getX().toFloat(), point.getY().toFloat());
    std::cout << A << "\n";
    std::cout << A1 <<  "\n";
    std::cout << A2 << "\n";
    std::cout << A3 <<  "\n";
    std::cout << A1 + A2 + A3 <<  "\n";
    return (A == A1 + A2 + A3);
}