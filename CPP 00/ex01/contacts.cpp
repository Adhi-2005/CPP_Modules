/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:47:55 by adshafee          #+#    #+#             */
/*   Updated: 2025/01/15 12:00:21 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contacts.hpp"

Contact::Contact() : firstName(""), lastName(""), nickName(""), phoneNumber(""), darkestSecret("") {}

void Contact::fillContacts() {
	std::cout<<"Enter First Name: ";
	while(true)
	{
		std::getline(std::cin, firstName);
		if (std::cin.eof()) {
			std::cout << "\nCtrl+D detected. Exiting PhoneBook...\n";
			exit(0);
		}
		if (firstName.empty())
			continue;
		else
			break;
	}
	std::cout<<"Enter Last Name: ";
	while(true)
	{
		std::getline(std::cin, lastName);
		if (std::cin.eof()) {
			std::cout << "\nCtrl+D detected. Exiting PhoneBook...\n";
			exit(0);
		}
		if (lastName.empty())
			continue;
		else
			break;
	}
	std::cout<<"Enter Nickname: ";
	while(true)
	{
		std::getline(std::cin, nickName);
		if (std::cin.eof()) {
			std::cout << "\nCtrl+D detected. Exiting PhoneBook...\n";
			exit(0);
		}
		if (nickName.empty())
			continue;
		else
			break;
	}
	std::cout<<"Enter Phone Number: ";
	while(true)
	{
		std::getline(std::cin, phoneNumber);
		if (std::cin.eof()) {
			std::cout << "\nCtrl+D detected. Exiting PhoneBook...\n";
			exit(0);
		}
		if (phoneNumber.empty())
			continue;
		else
			break;
	}
	std::cout<<"Enter Darkest Secret: ";
	while(true)
	{
		std::getline(std::cin, darkestSecret);
		if (std::cin.eof()) {
			std::cout << "\nCtrl+D detected. Exiting PhoneBook...\n";
			exit(0);
		}
		if (darkestSecret.empty())
			continue;
		else
			break;
	}
}

std::string Contact::getFirstName() const{ return firstName; }
std::string Contact::getLastName() const{ return lastName; }
std::string Contact::getNickName() const{ return nickName; }
std::string Contact::getPhoneNumber() const{ return phoneNumber; }
std::string Contact::getDarkestSecret() const{ return darkestSecret; }