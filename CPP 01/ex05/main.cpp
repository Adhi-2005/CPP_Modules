/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:12:49 by adshafee          #+#    #+#             */
/*   Updated: 2025/01/24 13:05:42 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl caller;
	std::cout << "Harl complaining at DEBUG level:" << std::endl;
	caller.complain("DEBUG");

	std::cout << "\nHarl complaining at INFO level:" << std::endl;
	caller.complain("INFO");

	std::cout << "\nHarl complaining at WARNING level:" << std::endl;
	caller.complain("WARNING");

	std::cout << "\nHarl complaining at ERROR level:" << std::endl;
	caller.complain("ERROR");

	std::cout << "\nHarl complaining at an unknown level:" << std::endl;
	caller.complain("UNKNOWN");
	return 0;
}
