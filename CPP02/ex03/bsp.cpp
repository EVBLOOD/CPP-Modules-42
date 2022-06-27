/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 20:40:59 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/27 21:14:26 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    a.getX().toFloat();
    a.getY().toFloat();
    b.getX().toFloat();
    b.getY().toFloat();
    c.getX().toFloat();
    c.getY().toFloat();
    point.getX().toFloat();
    point.getY().toFloat();
}