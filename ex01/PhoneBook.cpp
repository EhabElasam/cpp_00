#include <iostream>
#include <iomanip>
#include "PhoneBook.h"

PhoneBook::PhoneBook() : contactCount(0) {}

bool PhoneBook::addContact(const Contact& contact) {
    if (contactCount < maxContacts) {
        contacts[contactCount++] = contact;
        return true;
    } else {
        contacts[0] = contact; // Ersetze den ältesten Kontakt
        return true;
    }
    return false;
}

void PhoneBook::searchContacts() const
{
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    for (int i = 0; i < contactCount; ++i) {
        std::cout << "|" << std::setw(10) << i
                  << "|" << std::setw(10) << truncateString(contacts[i].firstName)
                  << "|" << std::setw(10) << truncateString(contacts[i].lastName)
                  << "|" << std::setw(10) << truncateString(contacts[i].nickname)
                  << "|" << std::endl;
        std::cout << "|----------|----------|----------|----------|" << std::endl;
    }

    int index;
    std::cout << "Enter index of contact to display: ";
    if (std::cin >> index && index >= 0 && index < contactCount) {
        displayContact(contacts[index]);
    } else {
        std::cout << "Invalid index." << std::endl;
    }
}

std::string PhoneBook::truncateString(const std::string& str) const {
    if (str.length() <= 10) {
        return str;
    } else {
        return str.substr(0, 9) + ".";
    }
}

void PhoneBook::displayContact(const Contact& contact) const {
    std::cout << "First Name: " << contact.firstName << std::endl;
    std::cout << "Last Name: " << contact.lastName << std::endl;
    std::cout << "Nickname: " << contact.nickname << std::endl;
    std::cout << "Phone Number: " << contact.phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << contact.darkestSecret << std::endl;
}
