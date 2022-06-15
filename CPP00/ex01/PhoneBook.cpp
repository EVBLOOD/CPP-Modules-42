/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:24:04 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/15 11:21:44 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::set_contact(std::string firstname, std::string lastname,
	std::string nickname, std::string phonenumber, std::string secret)
{
	this->m_contacts[index].set_nickname(nickname);
	this->m_contacts[index].set_darkest_secret(secret);
	this->m_contacts[index].set_phone_number(phonenumber);
	this->m_contacts[index].set_firstname(firstname);
	this->m_contacts[index].set_lastname(lastname);
	(this->index)++;
}
Contact	*PhoneBook::get_contacts(void)
{
	return (this->m_contacts);
}
void PhoneBook::ADD(void)
{
	std::string	input;

	std::cout << "First name :\n";
	// std::cin >> input;
	// this->m_firstname = input;
	// std::cout << "Last name :\n";
	// std::cin >> input;
	// this->m_lastname = input;
	// std::cout << "Nick name :\n";
	// std::cin >> input;
	// this->m_nickname = input;
	// std::cout << "Phone number :\n";
	// std::cin >> input;
	// this->m_phone_number = input;
	// std::cout << "Darkest secret :\n";
	// std::cin >> input;
	// this->m_darkest_secret = input;
}
	// 	Contact SEARCH()