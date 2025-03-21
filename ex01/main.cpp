#include <iostream>
#include "PhoneBook.hpp"

bool	read_line(std::string &str, const std::string &msg)
{
	std::cout << msg;
	if (!std::getline(std::cin, str))
	{
		std::cout << "You typed Ctrl + D" << std::endl;
		return false;
	}
	return true;
}

bool	parsing_attribute(std::string &str, const std::string &msg, const std::string &error_msg)
{
	if (!read_line(str, msg))
		return false;
    while (str.empty())
    {
        std::cout << error_msg << std::endl;
        if (!read_line(str, msg))
			return false;
    }
    return true;
}

bool	command_add(PhoneBook &myPhoneBook)
{
    std::string first_name, last_name, nickname, phone, secret;

	if (!parsing_attribute(first_name, "Enter first name: ", "First name cannot be empty!"))
		return false;
	else if (!parsing_attribute(last_name, "Enter last name: ", "Last name cannot be empty!"))
		return false;
	else if (!parsing_attribute(nickname, "Enter nickname: ", "Nickname cannot be empty!"))
		return false;
	else if (!parsing_attribute(phone, "Enter phone number: ", "Phone number cannot be empty!"))
		return false;
	else if (!parsing_attribute(secret, "Enter darkest secret: ", "Darkest secret cannot be empty!"))
		return false;

	Contact newContact(first_name, last_name, nickname, phone, secret);
	myPhoneBook.addContact(newContact);
    return true;
}

bool	command_search(PhoneBook &myPhoneBook)
{
	unsigned int index;
	std::string index_str;

	myPhoneBook.printContacts();
	if (myPhoneBook.getIndex() == -1)
		return true;
	if (!parsing_attribute(index_str, "Enter index to search: ", "Index cannot be empty!"))
		return false;
	try
	{
		index = std::stoi(index_str);
	}
	catch (std::exception &e)
	{
		std::cout << "Index must be a number" << std::endl;
		return false;
	}
	myPhoneBook.searchContact(index);
	return true;
}

int main()
{
    PhoneBook myPhoneBook;
	std::string command;

	if (!read_line(command, "Type ADD, SEARCH or EXIT: "))
		return 1;
	while (command.empty() || command != "EXIT")
    {
		if (command == "ADD")
			command_add(myPhoneBook);
		else if (command == "SEARCH")
			command_search(myPhoneBook);
        if (!read_line(command, "Type ADD, SEARCH or EXIT: "))
		{
			std::cout << "Exiting program" << std::endl;
			return 1;
		}
    }

	return 0;
}

