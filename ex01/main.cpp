#include <iostream>
#include "PhoneBook.h"

/* int main() {
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::cin >> command;

        // Implementierung der Benutzerinteraktion wie zuvor...
    }

    return 0;
} */


int main() {
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::cin >> command;

        if (command == "ADD") {
            Contact newContact;
            std::cout << "First Name: ";
            std::cin >> newContact.firstName;
            std::cout << "Last Name: ";
            std::cin >> newContact.lastName;
            std::cout << "Nickname: ";
            std::cin >> newContact.nickname;
            std::cout << "Phone Number: ";
            std::cin >> newContact.phoneNumber;
            std::cout << "Darkest Secret: ";
            std::cin >> newContact.darkestSecret;

            if (phoneBook.addContact(newContact)) {
                std::cout << "Contact added successfully!" << std::endl;
            } else {
                std::cout << "Failed to add contact." << std::endl;
            }
        } else if (command == "SEARCH") {
            phoneBook.searchContacts();
        } else if (command == "EXIT") {
            std::cout << "Goodbye!" << std::endl;
            break;
        } else {
            std::cout << "Invalid command. Try again." << std::endl;
        }
    }

    return 0;
}

