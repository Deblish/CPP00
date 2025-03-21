/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 10:19:01 by aapadill          #+#    #+#             */
/*   Updated: 2025/03/20 10:19:02 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _index(-1)
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::addContact(Contact &newContact)
{
	_index = (_index + 1) % 8;
	_contacts[_index] = newContact;
	std::cout << "Contact added" << std::endl;
}

void PhoneBook::searchContact(int index)
{
	if (index < 0 || index > 7)
	{
		std::cout << "Index out of range" << std::endl;
		return ;
	}
	if (index > _index)
	{
		std::cout << "Can't find a contact with that index" << std::endl;
		return ;
	}
	_contacts[index].printContact();
}

void PhoneBook::printContacts()
{
	int i = 0;
	
	if (_index == -1)
	{
		std::cout << "Your phonebook has no contacts" << std::endl;
		return ;
	}
	while (i <= _index)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << _contacts[i].get_first_name() << "|";
		std::cout << std::setw(10) << _contacts[i].get_last_name() << "|";
		std::cout << std::setw(10) << _contacts[i].get_nickname() << std::endl;
		i++;
	}
}

int	PhoneBook::getIndex()
{
	return (_index);
}