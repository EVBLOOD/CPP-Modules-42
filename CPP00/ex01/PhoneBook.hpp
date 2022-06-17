/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:57:32 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/16 20:27:58 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact m_contacts[8];
		int		index;
		int		total;
	public:
		PhoneBook();
		void	set_contact(std::string firstname, std::string lastname,
			std::string nickname, std::string phonenumber, std::string secret);
		const Contact	*get_contacts(void) const;
		const Contact	*searchfor(int indexing) const;
		int		get_total(void) const;
		// void ADD(Contact *m_contacts);
			// public:
	// 	void ADD(void)
	// 	{
	// 		std::string	input;
		
	// 		std::cout << "First name :\n";
	// 		std::cin >> input;
	// 		this->m_firstname = input;
	// 		std::cout << "Last name :\n";
	// 		std::cin >> input;
	// 		this->m_lastname = input;
	// 		std::cout << "Nick name :\n";
	// 		std::cin >> input;
	// 		this->m_nickname = input;
	// 		std::cout << "Phone number :\n";
	// 		std::cin >> input;
	// 		this->m_phone_number = input;
	// 		std::cout << "Darkest secret :\n";
	// 		std::cin >> input;
	// 		this->m_darkest_secret = input;
	// 	}
	// 	Contact SEARCH()
};
