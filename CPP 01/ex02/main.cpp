/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 14:32:15 by adshafee          #+#    #+#             */
/*   Updated: 2025/03/17 13:04:54 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string main_str= "HI THIS IS BRAIN";
	std::string* stringPTR = &main_str;
	std::string& stringREF = main_str;

	// Printing out the Memory addresses
	std::cout<< "Memory Address of the Main string: " << &main_str << "\n";
	std::cout<< "Memory Address pointer to by the stringPTR: " << stringPTR << "\n";
	std::cout<< "Memory Address held by stringREF: " << &stringREF << "\n";

	std::cout<< "\n";

	// Printing out the value stored
	std::cout << "Value of the string variable: " << main_str << "\n";
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << "\n";
	std::cout << "Value pointed to by stringREF: " << stringREF << "\n";
	return (0);
}