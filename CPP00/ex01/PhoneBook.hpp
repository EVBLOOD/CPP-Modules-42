/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:57:32 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/17 16:26:58 by sakllam          ###   ########.fr       */
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
};
