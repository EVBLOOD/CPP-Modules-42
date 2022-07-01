/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 21:12:51 by sakllam           #+#    #+#             */
/*   Updated: 2022/07/01 22:09:16 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

int main() {
    Data tmp = {10};
    std::cout << "value of x : ";
    std::cout << tmp.x << '\n';
    std::cout << "address of Data : ";
    std::cout << &tmp << '\n';
    uintptr_t s = serialize(&tmp);
    std::cout << "value of address of Data as unsigned long (uintptr_t) : ";
    std::cout << s << '\n';
    Data *des = deserialize(s);
    std::cout << "value of x after deserialize : ";
    std::cout << des->x << '\n';
}