/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 22:08:33 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/21 22:22:32 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string var = "HI THIS IS BRAIN";
    std::string *stringPTR = &var;
    std::string &stringREF = var;

    std::cout << "The memory address of the string variable => " << &var << "\n";
    std::cout << "The memory address held by stringPTR => " << stringPTR << "\n";
    std::cout << "The memory address held by stringREF => " << &stringREF << "\n";

    std::cout << "The value of the string variable => " << var << "\n";
    std::cout << "The value pointed to by stringPTR => " << *stringPTR << "\n";
    std::cout << "The value pointed to by stringREF => " << stringREF << "\n";
}