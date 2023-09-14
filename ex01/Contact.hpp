/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <EHAB@student.42vienna.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:05:34 by eelasam           #+#    #+#             */
/*   Updated: 2023/09/12 16:53:44 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    std::string getFirstName() const { return firstName; }
    std::string getLastName() const { return lastName; }
    std::string getNickname() const { return nickname; }
    std::string getPhoneNumber() const { return phoneNumber; }
    std::string getDarkestSecret() const { return darkestSecret; }

    void setFirstName(const std::string& fn) { firstName = fn; }
    void setLastName(const std::string& ln) { lastName = ln; }
    void setNickname(const std::string& nn) { nickname = nn; }
    void setPhoneNumber(const std::string& pn) { phoneNumber = pn; }
    void setDarkestSecret(const std::string& ds) { darkestSecret = ds; }
};

void    Exit_check();

#endif
