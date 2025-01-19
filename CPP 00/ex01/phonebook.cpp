/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:06:32 by adshafee          #+#    #+#             */
/*   Updated: 2025/01/15 15:15:19 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

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


	int index;
	std::cout<< "Enter index of contact to display: ";
	std::cin>>index;
	std::cin.ignore();
	if (std::cin.eof()) {
			std::cout << "\nCtrl+D detected. Exiting PhoneBook...\n";
			exit(0);
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
