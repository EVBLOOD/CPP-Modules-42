/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:59:40 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/17 10:00:42 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//don't forget to add define!

# include <string>
# include <iostream>

class Contact
{
	private:
		std::string 	m_firstname;
		std::string 	m_lastname;
		std::string 	m_nickname;
		std::string 	m_phone_number;
		std::string		m_darkest_secret;
	public:
		void 		set_firstname(std::string firstname);
		void 		set_lastname(std::string lastname);
		void		set_nickname(std::string nickname);
		void		set_phone_number(std::string phone_number);
		void		set_darkest_secret(std::string darkest_secret);
		std::string	get_firstname(void) const;
		std::string get_lastname(void) const;
		std::string get_nickname(void) const;
		std::string get_phone_number(void) const;
		std::string get_darkest_secret(void) const;
};
