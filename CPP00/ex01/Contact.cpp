/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:20:36 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/17 10:01:19 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_firstname(std::string firstname)
{
	this->m_firstname = firstname;
}

void	Contact::set_lastname(std::string lastname)
{
	this->m_lastname = lastname;
}

void Contact::set_nickname(std::string nickname)
{
	this->m_nickname =nickname;
}
void Contact::set_phone_number(std::string phone_number)
{
	this->m_phone_number = phone_number;
}
void Contact::set_darkest_secret(std::string darkest_secret)
{
	this->m_darkest_secret = darkest_secret;
}
std::string Contact::get_firstname(void) const
{
	return (this->m_firstname);
}
std::string Contact::get_lastname(void) const
{
	return (this->m_lastname);
}
std::string Contact::get_nickname(void) const
{
	return (this->m_nickname);
}
std::string Contact::get_phone_number(void) const
{
	return (this->m_phone_number);
}
std::string Contact::get_darkest_secret(void) const
{
	return (this->m_darkest_secret);
}
