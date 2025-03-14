/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 00:54:57 by adhi-2005         #+#    #+#             */
/*   Updated: 2025/03/14 17:25:21 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	ClapTrap ct("Clappy");
	ScavTrap st("Scavy");
	ClapTrap pt(st);

	pt = st;

	std::cout << "\n=== Testing ClapTrap ===" << std::endl;
	ct.attack("Bandit");
	ct.takeDamage(3);
	ct.beRepaired(2);

	std::cout << "\n=== Testing ScavTrap ===" << std::endl;
	st.attack("Bandit");
	st.takeDamage(30);
	st.beRepaired(15);
	st.guardGate();

	std::cout << "\n=== Testing ScavTrap ===" << std::endl;
	pt.attack("Hei");
	pt.beRepaired(323);
	pt.takeDamage(323);

	std::cout << "\n=== Destruction Chaining ===" << std::endl;

	return 0;
}
