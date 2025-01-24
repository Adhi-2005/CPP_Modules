/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:58:49 by adshafee          #+#    #+#             */
/*   Updated: 2025/01/24 13:04:03 by adshafee         ###   ########.fr       */
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

void Harl::complain(std::string level){
	typedef void (Harl::*HarlFunc)(void);
	HarlFunc functions[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	int i = 0;
	while (i < 4)
	{
		if (levels[i] == level)
		{
			(this->*functions[i])();
			return;
		}
		i++;
	}
	std::cout << "No complaints for Harl in this level\n";
}