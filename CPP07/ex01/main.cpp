/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 10:15:56 by sakllam           #+#    #+#             */
/*   Updated: 2022/07/02 10:36:52 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>
void oper(T const &a)
{
    std::cout << a << "\n";
}

int main()
{
    int x[] = {1,2,3,4,5,6};
    char u[] = {'a', 'b', 'c', 'd'};

    iter(x, 6, oper);
    iter(u, 4, oper);
}