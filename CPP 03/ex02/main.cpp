/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhi-2005 <adhi-2005@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 00:54:57 by adhi-2005         #+#    #+#             */
/*   Updated: 2025/02/08 07:48:02 by adhi-2005        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


int main() {
	ClapTrap clap("Clappy");
	ScavTrap scav("Scavvy");
	FragTrap frag("Fraggy");

	clap.attack("Enemy1");
	scav.attack("Enemy2");
	frag.attack("Enemy3");

	frag.highFivesGuys();

	clap.takeDamage(5);
	scav.takeDamage(10);
	frag.takeDamage(20);

	clap.beRepaired(5);
	scav.beRepaired(10);
	frag.beRepaired(15);

	return 0;
}