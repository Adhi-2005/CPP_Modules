/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:35:54 by adshafee          #+#    #+#             */
/*   Updated: 2025/01/13 15:20:45 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>

# include "contacts.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int oldestIndex;
		int contactCount;
	
		std::string truncate(const std::string& str) const;
	
	public:

		PhoneBook();

		void addContact();
		void searchContacts() const;

};

#endif