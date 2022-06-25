/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:57:32 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/25 22:01:39 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <cstdlib>

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
