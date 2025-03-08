/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhi-2005 <adhi-2005@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 10:05:27 by adshafee          #+#    #+#             */
/*   Updated: 2025/03/08 13:06:46 by adhi-2005        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"



int main() {
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);	// Bob is armed with a club
		bob.attack();			// Outputs: Bob attacks with their crude spiked club

		club.setType("some other type of club");
		bob.attack();			// Outputs: Bob attacks with their some other type of club
	}

	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);	// Set weapon for Jim later
		jim.attack();		// Outputs: Jim attacks with their crude spiked club

		club.setType("some other type of club");
		jim.attack();		// Outputs: Jim attacks with their some other type of club
	}

	return 0;
}
