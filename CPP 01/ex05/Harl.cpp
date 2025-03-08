/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhi-2005 <adhi-2005@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:58:49 by adshafee          #+#    #+#             */
/*   Updated: 2025/03/08 14:40:13 by adhi-2005        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level) {
	int levelCode = -1;

	switch (level[0]) {
		case 'D':
			if (level == "DEBUG") levelCode = 0;
			break;
		case 'I':
			if (level == "INFO") levelCode = 1;
			break;
		case 'W':
			if (level == "WARNING") levelCode = 2;
			break;
		case 'E':
			if (level == "ERROR") levelCode = 3;
			break;
		default:
			levelCode = -1;
			break;
	}

	switch (levelCode) {
		case 0:
			this->debug();
			break;
		case 1:
			this->info();
			break;
		case 2:
			this->warning();
			break;
		case 3:
			this->error();
			break;
		default:
			std::cout << "No complaints for Harl in this level\n";
			break;
	}
}