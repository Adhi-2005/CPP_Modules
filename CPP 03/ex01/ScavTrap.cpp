/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhi-2005 <adhi-2005@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 07:01:12 by adhi-2005         #+#    #+#             */
/*   Updated: 2025/02/08 07:18:16 by adhi-2005        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap " << this->name << " has been constructed!\n";
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->name << " has been destroyed!\n";
}

void ScavTrap::attack(const std::string& target) {
	if (this->energyPoints == 0 || this->hitPoints == 0)
	{
		std::cout << "ScavTrap " << this->name << " has no energy of hit point remaining to attack\n";
		return;
	}
	this->energyPoints--;
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!\n";
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->name << " is now in Gate Keeper mode !\n";
}