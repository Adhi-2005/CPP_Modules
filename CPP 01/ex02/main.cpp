/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 14:32:15 by adshafee          #+#    #+#             */
/*   Updated: 2025/01/19 14:32:16 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string main_str= "HI THIS IS BRAIN";
	std::string* stringPTR = &main_str;
	std::string& stringREF = main_str;

	std::cout<< "Output from the Main string: " << main_str << "\n";
	std::cout<< "Memory Adrress pointer to by the stringPTR: " << stringPTR << "\n";
	std::cout<< "Memory address held by stringREF: " << stringREF << "\n";
	return (0);
}