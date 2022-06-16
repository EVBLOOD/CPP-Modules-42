/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 12:01:03 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/16 18:46:09 by sakllam          ###   ########.fr       */
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
    std::cout << "Make your choice!    ";
}

int choiceismine(std::string input)
{
    if (input.compare("ADD") != 0 && input.compare("EXIT") != 0 && input.compare("SEARCH") != 0)
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

void    mjustsaying(std::string what)
{
    int i;
    if (what.length() > 10)
    {
        std::cout << what.substr(0, 8);
        std::cout << ".";
    }
    else
    {
        i = 0;
        std::cout << what.substr(0, what.length() - 1);
        while (what.length() + i <= 10)
        {
           std::cout << " ";
           i++;
        }
    }
}

void    displaying(PhoneBook stupid)
{
    int         i;
    Contact     *x;
    std::string a;

    x = stupid.get_contacts();
    std::cout << "|"; std::cout << "index     "; std::cout << "|"; std::cout << "first name";
    std::cout << "|"; std::cout << "last name "; std::cout << "|";
    std::cout << "nickname  "; std::cout << "|\n";
    while (i < stupid.get_total())
    {
        std::cout << "|"; std::cout << i; std::cout << "         ";
        a = x[i].get_firstname();
        std::cout << "|"; mjustsaying(a); std::cout << "|";
        a = x[i].get_lastname();
        mjustsaying(a); std::cout << "|";
        a = x[i].get_nickname();
        mjustsaying(a); std::cout << "|";
        i++;
        std::cout << "\n";
    }
}

void    SEARCH(PhoneBook stupid)
{
    int     index;
    Contact *theone;

    displaying(stupid);
    std::cout << "The Contact INDEX you want to find\n";
    std::cin >> index;
    theone = stupid.searchfor(index);
    if (!theone)
        std::cout << "This one doesn't even exist\n";
    else
    {
        std::cout << "index         :"; std::cout << index; std::cout << "\n";
        std::cout << "first name    :"; std::cout << theone->get_firstname(); std::cout << "\n";
        std::cout << "last name     :"; std::cout << theone->get_lastname(); std::cout << "\n";
        std::cout << "nick name     :"; std::cout << theone->get_nickname(); std::cout << "\n";
        std::cout << "phone number  :"; std::cout << theone->get_phone_number(); std::cout << "\n";
        std::cout << "darkest secret:"; std::cout << theone->get_darkest_secret(); std::cout << "\n";
    }
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
            else if (!input.compare("SEARCH"))
                SEARCH(stupid);
            else
                break ;
        }
        else
            std::cout << "My Awesome PhoneBook doesn't have your choice\n";
        input = "";
    }
    std::cout << "EXIT\n";
    return (1);
}