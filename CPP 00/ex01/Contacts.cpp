/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:47:55 by adshafee          #+#    #+#             */
/*   Updated: 2025/01/24 18:55:11 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

Contact::Contact() : firstName(""), lastName(""), nickName(""), phoneNumber(""), darkestSecret("") {}

void Contact::fillContacts() {
	
	//ENTER THE FIRST NAME
	while(true)
	{
		std::cout<<"Enter First Name: ";
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
	//ENTER THE LAST NAME
	while(true)
	{
		std::cout<<"Enter Last Name: ";
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
	//ENTER THE NICKNAME
	while(true)
	{
		std::cout<<"Enter Nickname: ";
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
	//ENTER THE PHONE NUMBER
	while(true)
	{
		std::cout<<"Enter Phone Number: ";
		std::getline(std::cin, phoneNumber);
		if (std::cin.eof()) {
			std::cout << "\nCtrl+D detected. Exiting PhoneBook...\n";
			exit(0);
		}
		if (phoneNumber.find_first_not_of("0123456789") != std::string::npos)
		{
			std::cout<< "Invalid input. Please Enter Numbers\n";
			continue;
		}
		if (phoneNumber.empty())
		{
			std::cout << "Phone number can't be empty.";
			continue;
		}
		break;
	}
	//ENTER THE DARKEST SECRET
	while(true)
	{
		std::cout<<"Enter Darkest Secret: ";
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