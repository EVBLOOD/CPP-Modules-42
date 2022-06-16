/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 12:01:03 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/16 17:09:57 by sakllam          ###   ########.fr       */
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
    if (input.compare("ADD") || input.compare("EXIT") || input.compare("SEARCH"))
        return (0);
    return (1 );
}

void    ADD (PhoneBook *stupid)
{
    std::string fname;
    std::string lname;
    std::string nname;
    std::string fnumber;
    std::string dsecret;

    std::cout << "First name :\n";
	std::cin >> fname;
	std::cout << "Last name :\n";
	std::cin >> lname;
	std::cout << "Nick name :\n";
	std::cin >> nname;
	std::cout << "Phone number :\n";
	std::cin >> fnumber;
	std::cout << "Darkest secret :\n";
	std::cin >> dsecret;
	stupid->set_contact(fname, lname, nname, fnumber, dsecret);
}

int main()
{
    PhoneBook       stupid;
    std::string     input;

    std::cout << "My Awesome PhoneBook\n";
    while (1)
    {
        everystart();
        std::cin >> input;
        if (choiceismine(input))
        {
            if (!input.compare("ADD"))
                ADD(&stupid);
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