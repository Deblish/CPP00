/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 14:44:19 by aapadill          #+#    #+#             */
/*   Updated: 2025/03/19 14:44:21 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
	private:
		int _index;
		Contact _contacts[8];

	public:
		PhoneBook();
		~PhoneBook();
		void addContact(Contact &newContact);
		void searchContact(int index);
		void printContacts();
		int	getIndex();
};

#endif
