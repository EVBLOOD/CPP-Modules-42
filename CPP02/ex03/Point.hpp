/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 20:42:59 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/27 21:10:11 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include "Fixed.hpp"

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Fixed getX(void) const;
        Fixed getY(void) const;
        Point();
        Point(float x, float y);
        Point(const Point &p);
        ~Point();
        Point *operator=(Point &point);
};

