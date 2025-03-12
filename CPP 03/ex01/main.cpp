/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 00:54:57 by adhi-2005         #+#    #+#             */
/*   Updated: 2025/03/12 12:34:47 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main() {
	ClapTrap ct("Clappy");
	ScavTrap st("Scavy");

	std::cout << "\n=== Testing ClapTrap ===" << std::endl;
	ct.attack("Bandit");
	ct.takeDamage(3);
	ct.beRepaired(2);
	
	std::cout << "\n=== Testing ScavTrap ===" << std::endl;
	st.attack("Bandit");
	st.takeDamage(30);
	st.beRepaired(15);
	st.guardGate();

	return 0;
}