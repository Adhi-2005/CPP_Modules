/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhi-2005 <adhi-2005@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 00:54:57 by adhi-2005         #+#    #+#             */
/*   Updated: 2025/02/08 06:42:30 by adhi-2005        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap clap("Clapster");

	clap.attack("Enemy");
	clap.takeDamage(5);
	clap.beRepaired(3);
	clap.attack("AnotherEnemy");

	return 0;
}