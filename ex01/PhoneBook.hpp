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

# define MAX_CONTACTS 8
# define MIN_INDEX 0
# define MAX_LENGHT 10

class PhoneBook
{
	private:
		bool _isFull;
		int _index;
		Contact _contacts[MAX_CONTACTS];

	public:
		PhoneBook();
		~PhoneBook();
		void addContact(Contact &newContact);
		void searchContact(int index);
		void printContacts();
		int	getIndex();
};

#endif
