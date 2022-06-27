/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 22:04:15 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/27 22:59:48 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main()
{
    Point A;
    Point B(20, 0);
    Point C(10, 30);
    Point P(1, 1);

    std::cout << "test 1\n";
    if (bsp(A, B, C, P))
        std::cout << "in \n";
    else
        std::cout << "nope!\n";

    std::cout << "test 2\n";
    Point X(-1, 1);

    if (bsp(A, B, C, X))
        std::cout << "in \n";
    else
        std::cout << "nope!\n";
    return 0;
}
