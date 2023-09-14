/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <EHAB@student.42vienna.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:06:02 by eelasam           #+#    #+#             */
/*   Updated: 2023/09/12 16:48:15 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool isStringEmptyOrWhitespace(const std::string& str)
{
    if (str.empty())
		return true;
    for (size_t i = 0; i < str.length(); ++i)
	{
        if (str[i] != ' ' && str[i] != '\t')
            return false;
    }
    return true;
}

bool isValidPhoneNumber(const std::string& phoneNumber) 
{
    if (phoneNumber.empty())
        return false;

    std::size_t startIndex = 0;

    if (phoneNumber[0] == '+')
        startIndex = 1;

    for (std::size_t i = startIndex; i < phoneNumber.size(); i++) 
    {
        if (!std::isdigit(phoneNumber[i]))
            return false;
    }

    return true;
}

void Exit_check()
{
    if (std::cin.eof() || std::cin.fail())
    {
        std::cout << std::endl << "Exiting program." << std::endl;
        exit(0);
    }
}

int main()
{
	PhoneBook phoneBook;
	std::string command;

	while (true)
	{
		Exit_check();
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);
		
	
		if (command == "ADD")
		{
			Contact newContact;
			std::string input;

		while (true)
        {
            std::cout << "First Name: ";
            std::getline(std::cin, input);
			Exit_check();
            newContact.setFirstName(input);
            if (!isStringEmptyOrWhitespace(newContact.getFirstName()))
                break;
            std::cout << "First name cannot be empty. Please try again.\n";
        }

		while (true)
        {
            std::cout << "Last Name: ";
            std::getline(std::cin, input);
			Exit_check();
            newContact.setLastName(input);
            if (!isStringEmptyOrWhitespace(newContact.getLastName()))
                break;
            std::cout << "Last name cannot be empty. Please try again.\n";
        }

		while (true)
        {
            std::cout << "Nickname: ";
            std::getline(std::cin, input);
			Exit_check();
            newContact.setNickname(input);
            if (!isStringEmptyOrWhitespace(newContact.getNickname()))
                break;
            std::cout << "Nick name cannot be empty. Please try again.\n";
        }

		while (true)
        {
            std::cout << "Phone Number: ";
            std::getline(std::cin, input);
			Exit_check();
			if (!isValidPhoneNumber(input))
			{
				std::cout << "Phone number can only contain digits. Contact not added.\n";
    			continue;
			}
            newContact.setPhoneNumber(input);
            if (!isStringEmptyOrWhitespace(newContact.getPhoneNumber()))
                break;
            std::cout << "Phone Number cannot be empty. Please try again.\n";
        }

		while (true)
        {
            std::cout << "Darkest Secret: ";
            std::getline(std::cin, input);
			Exit_check();
            newContact.setDarkestSecret(input);
            if (!isStringEmptyOrWhitespace(newContact.getDarkestSecret()))
                break;
            std::cout << "DarkestSecret cannot be empty. Please try again.\n";
        }

			if (phoneBook.addContact(newContact))
				std::cout << "Contact added successfully!" << std::endl;
			else
				std::cout << "Failed to add contact." << std::endl;
		}
		else if (command == "SEARCH")
		{
			Exit_check();
			phoneBook.searchContacts();
		}
		else if (command == "EXIT")
		{
			std::cout << "Goodbye!" << std::endl;
			break;
		}
 		else
		{
			Exit_check();
			std::cout << "Invalid command. Try again." << std::endl;
		}
	}
	return 0;
}

