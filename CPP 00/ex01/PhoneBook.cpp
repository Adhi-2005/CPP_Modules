/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:06:32 by adshafee          #+#    #+#             */
/*   Updated: 2025/01/24 18:40:22 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : oldestIndex(0), contactCount(0) {}

void PhoneBook::addContact() {
			Contact newContact;
			newContact.fillContacts();
			contacts[oldestIndex] = newContact;
			oldestIndex = (oldestIndex + 1) % 8;
			if (contactCount < 8) contactCount++;
		}

void PhoneBook::searchContacts() const {
	if (contactCount == 0){
		std::cout<<"No contacts available. \n";
		return;
	}

	std::cout<< std::setw(10) << "Index" << "|"
					<<std::setw(10) << "First Name" << "|"
					<<std::setw(10) << "Last Name" << "|"
					<<std::setw(10) << "Nickname" << "\n";

	for(int i = 0; i < contactCount; ++i)
	{
		std::cout<<std::setw(10) << i << "|"
				<<std::setw(10) << truncate(contacts[i].getFirstName()) << "|"
				<<std::setw(10) << truncate(contacts[i].getLastName()) << "|"
				<<std::setw(10) << truncate(contacts[i].getNickName()) << "\n";
	}


	std::string input;
	int index = -1;
	while (true) {
		std::cout << "Enter index of contact to display: ";
		std::getline(std::cin, input);

		if (std::cin.eof()) {
			std::cout << "\nCtrl+D detected. Exiting PhoneBook...\n";
			exit(1);
		}
		if (input.find_first_not_of("0123456789") != std::string::npos) {
			std::cout << "Invalid input. Please enter a number between 0 and " << contactCount - 1 << ".\n";
			continue;
		}
		index = std::atoi(input.c_str());
		if (index < 0 || index >= contactCount) {
			std::cout << "Invalid Index. Please enter a valid index.\n";
			continue;
		}
		break;
	}


	if (index < 0 || index >= contactCount){
		std::cout<< "Invalid Index. \n";
	}else{
		const Contact& contact = contacts[index];
		std::cout << "First Name: "<< contact.getFirstName() << "\n";
		std::cout<< "Last Name: "<< contact.getLastName() << "\n";
		std::cout<< "Nickname: "<< contact.getNickName() << "\n";
		std::cout<< "Phone Number: "<< contact.getPhoneNumber() << "\n";
		std::cout<< "Darkest Secret: "<< contact.getDarkestSecret() << "\n";
	}
}

std::string PhoneBook::truncate(const std::string& str) const{
	if(str.length() > 10){
		return str.substr(0, 9) + '.';
	}
	return str;
}
