#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include "Contact.h"

class PhoneBook {
private:
    static const int maxContacts = 8;
    Contact contacts[maxContacts];
    int contactCount;

    std::string truncateString(const std::string& str) const;
    void displayContact(const Contact& contact) const;

public:
    PhoneBook(); 
    bool addContact(const Contact& contact);
    void searchContacts() const;
};

#endif
