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

PhoneBook::PhoneBook() : _isFull(false), _index(-1)
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::addContact(Contact &newContact)
{
	if (_index == MAX_INDEX)
	{
		_index = MIN_INDEX;
		_isFull = true;
	}
	else
		_index++;
	_contacts[_index % MAX_CONTACTS] = newContact;
	std::cout << "Contact added" << std::endl;
}

void PhoneBook::searchContact(int index)
{
	if (index < MIN_INDEX || index > MAX_INDEX)
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

static std::string truncate(std::string str)
{
	if (str.length() > MAX_LENGHT)
	{
		str.resize(MAX_LENGHT - 1);
		str.append(".");
	}
	return (str);
}

void PhoneBook::printContacts()
{
	int i = 0, rows = _index;
	
	if (_index == -1)
	{
		std::cout << "Your phonebook has no contacts" << std::endl;
		return ;
	}
	if (_isFull)
		rows = MAX_INDEX;
	while (i <= rows)
	{
		std::cout << std::setw(MAX_LENGHT) << i << "|";
		std::cout << std::setw(MAX_LENGHT) << truncate(_contacts[i].get_first_name()) << "|";
		std::cout << std::setw(MAX_LENGHT) << truncate(_contacts[i].get_last_name()) << "|";
		std::cout << std::setw(MAX_LENGHT) << truncate(_contacts[i].get_nickname()) << std::endl;
		i++;
	}
}

int	PhoneBook::getIndex()
{
	return (_index);
}