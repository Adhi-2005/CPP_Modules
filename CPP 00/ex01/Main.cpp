/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhil <adhil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:30:52 by adshafee          #+#    #+#             */
/*   Updated: 2025/01/16 10:59:07 by adhil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook phoneBook;
	std::string command;

	while (true) {
		std::cout<<"Enter Command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin,command);

		if (std::cin.eof()) {
			std::cout << "\nCtrl+D detected. Exiting PhoneBook...\n";
			exit(0);
		}

		if(command == "ADD")
			phoneBook.addContact();
		else if (command =="SEARCH")
			phoneBook.searchContacts();
		else if (command == "EXIT")
			break;
		else
			std::cout<<"Invalid Command.\n";
	}
	return (0);
}
