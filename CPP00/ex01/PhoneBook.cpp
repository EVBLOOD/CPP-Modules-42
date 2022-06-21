/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:24:04 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/18 17:30:33 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : index(0), total(0) {}
void	PhoneBook::set_contact(std::string firstname, std::string lastname,
	std::string nickname, std::string phonenumber, std::string secret)
{
	if (this->index > 7)
		this->index = 0;
	this->m_contacts[index].set_nickname(nickname);
	this->m_contacts[index].set_darkest_secret(secret);
	this->m_contacts[index].set_phone_number(phonenumber);
	this->m_contacts[index].set_firstname(firstname);
	this->m_contacts[index].set_lastname(lastname);
	if (this->total < 8)
		this->total++;
	(this->index)++;
}

const Contact	*PhoneBook::get_contacts(void) const
{
	return (this->m_contacts);
}

const Contact	*PhoneBook::searchfor(int indexing) const
{
	if (indexing > this->total || indexing < 0)
		return (NULL);
	else
		return (&(m_contacts[indexing]));
}

int	PhoneBook::get_total(void) const
{
	return (this->total);
}
