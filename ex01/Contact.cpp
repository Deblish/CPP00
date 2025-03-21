/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 17:41:54 by aapadill          #+#    #+#             */
/*   Updated: 2025/03/18 17:49:15 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone, std::string secret)
{
	_first_name = first_name;
	_last_name = last_name;
	_nickname = nickname;
	_phone = phone;
	_secret = secret;
}

std::string Contact::get_first_name()
{
	return _first_name;
}

std::string Contact::get_last_name()
{
	return _last_name;
}

std::string Contact::get_nickname()
{
	return _nickname;
}

std::string Contact::get_phone()
{
	return _phone;
}

std::string Contact::get_secret()
{
	return _secret;
}

void Contact::printContact()
{
	std::cout << "First name: " << _first_name << std::endl;
	std::cout << "Last name: " << _last_name << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone number: " << _phone << std::endl;
	std::cout << "Darkest secret: " << _secret << std::endl;
}
