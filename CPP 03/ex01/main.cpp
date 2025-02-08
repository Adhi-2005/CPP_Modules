/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhi-2005 <adhi-2005@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 00:54:57 by adhi-2005         #+#    #+#             */
/*   Updated: 2025/02/08 07:19:46 by adhi-2005        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main() {
	ClapTrap clap("Clappy");
	ScavTrap scav("Scavvy");

	clap.attack("Enemy1");
	scav.attack("Enemy2");

	clap.takeDamage(5);
	scav.takeDamage(30);

	clap.beRepaired(3);
	scav.beRepaired(10);

	scav.guardGate();

	return 0;
}