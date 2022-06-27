/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 20:59:09 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/27 22:38:35 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(float x, float y) : x(x), y(y)
{
    
}

Point::Point(const Point &p) : x(p.x), y(p.y)
{
    
}

Point::~Point()
{
}

Point *Point::operator=(Point &point)
{
    (void) point;
    return (this);
}

Fixed Point::getX(void) const
{
    return (this->x);
}
Fixed Point::getY(void) const
{
    return (this->y);
}