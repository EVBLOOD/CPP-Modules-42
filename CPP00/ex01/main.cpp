/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 12:01:03 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/16 15:56:58 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    everystart(void)
{
    std::cout << "The program only accepts\n";
    std::cout << "ADD\n";
    std::cout << "-----> Save a new contact\n";
    std::cout << "SEARCH\n";
    std::cout << "----->  Display a specific contact\n";
    std::cout << "EXIT\n";
    std::cout << "-----> The program quits\n";
    std::cout << "Make your choice!\n";
    std::cout << "My Awesome PhoneBook\n";
}

int choiceismine(std::string input)
{
    if (input.compare("ADD") || input.compare("ADD") || input.compare("ADD"))
        return (0);
    return (1 );
}

int main()
{
    PhoneBook   stupid;
    std::string     input;

    std::cout << "My Awesome PhoneBook\n";
    while (1)
    {
        everystart();
        std::cin >> input;
        if (choiceismine(input))
        {
            if (!input.compare("ADD"))
            {

            }
            else if (input.compare("SEARCH"))
            {

            }
            else
                break ;
        }
        else
            std::cout << "My Awesome PhoneBook doesn't have your choice\n";
    }
    std::cout << "EXIT\n";
    return (1);
}