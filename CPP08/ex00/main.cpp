/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 13:55:16 by sakllam           #+#    #+#             */
/*   Updated: 2022/07/24 15:31:37 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <array>
#include <list>

// template <typename T>
// void print(const T &con) {
//     typename T::const_iterator i = con.cbegin();
//     while (i != con.cend()) {
//         std::cout << *(i++) << '\n'; 
//     }
// }

int main()
{
    try
    {
        std::vector<int> x;
        x.push_back(0);
        x.push_back(1);
        // print(x);
        easyfind(x, 1);
        easyfind<std::vector<int> >(x, 1);
        std::cout << "found!\n"; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        std::array<int, 2> x = {0, 1};
        easyfind(x, -1);
        std::cout << "found!\n"; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        std::list<int> x;
        x.push_back(0);
        x.push_back(1);
        easyfind(x, 2);
        std::cout << "found!\n"; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}