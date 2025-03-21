/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:36:18 by aapadill          #+#    #+#             */
/*   Updated: 2025/03/19 08:23:59 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone;
		std::string _secret;

	public:
		Contact();
		~Contact();
		Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone, std::string secret);

		std::string get_first_name();
		std::string get_last_name();
		std::string get_nickname();
		std::string get_phone();
		std::string get_secret();
		void printContact();
};

#endif
