/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <EHAB@student.42vienna.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:05:44 by eelasam           #+#    #+#             */
/*   Updated: 2023/09/14 14:45:57 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : contactCount(0) {}

bool PhoneBook::addContact(const Contact& contact)
{
    int i = contactCount;
    contacts[i % 8] = contact;
    contactCount++;
        return true;
}

void PhoneBook::searchContacts() const
{
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    for (int i = 0; i < maxContacts; ++i)
    {
        if (!contacts[i].getFirstName().empty())
        {
            std::cout << "|" << std::setw(10) << i
                    << "|" << std::setw(10) << truncateString(contacts[i].getFirstName())
                    << "|" << std::setw(10) << truncateString(contacts[i].getLastName())
                    << "|" << std::setw(10) << truncateString(contacts[i].getNickname())
                    << "|" << std::endl;
            std::cout << "|----------|----------|----------|----------|" << std::endl;
        }
    }

    int index;
    if( contactCount == 0)
    {
        std::cout << std::endl << "NO Contacts" << std::endl;
        return ;
    }

    std::cout << "Enter index of contact to display: ";
/*     if (std::cin >> index && index >= 0 && index < contactCount)
    {
        displayContact(contacts[index]);
        std::cin.ignore(1000, '\n');
    }
    else
    {
        //Exit_check();
        std::cout << "Invalid index." << std::endl;
        std::cin.clear();
        std::cin.ignore(1000, '\n'); 
    }   */ 
    if (!(std::cin >> index ) || index < 0 || index >= contactCount)
    {
        int w = 0;
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        if(index != 0 )
        {
           exit(0);
            
        }
        if (!w)
        std::cout << "Invalid index." << std::endl;
    }
    else
    {
        displayContact(contacts[index]);
        std::cin.ignore(1000, '\n');
    } 
}

std::string PhoneBook::truncateString(const std::string& str) const
{

    if (str.length() <= 10)
        return str;
    else
        return str.substr(0, 9) + ".";
}

void PhoneBook::displayContact(const Contact& contact) const
{
    std::cout << "First Name: " << contact.getFirstName() << std::endl;
    std::cout << "Last Name: " << contact.getLastName() << std::endl;
    std::cout << "Nickname: " << contact.getNickname() << std::endl;
    std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
}
