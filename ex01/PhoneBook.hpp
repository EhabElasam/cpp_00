/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <EHAB@student.42vienna.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:05:55 by eelasam           #+#    #+#             */
/*   Updated: 2023/09/14 16:08:07 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include "Contact.hpp"

class PhoneBook
{
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
