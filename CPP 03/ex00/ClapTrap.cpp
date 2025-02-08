/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhi-2005 <adhi-2005@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 23:14:29 by adhi-2005         #+#    #+#             */
/*   Updated: 2025/02/08 06:53:25 by adhi-2005        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const& name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap " << this->name << " has entered the battlefield!\n";
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->name << " is destroyed\n";
}

void ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints == 0 || this->energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->name << " is unable to attack!\n";
		return ;
	}
	this->energyPoints--;
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!\n";
	
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->hitPoints == 0) {
		std::cout << "ClapTrap " << this->name << " is already out of hit points!\n";
		return ;
	}
	this->hitPoints = (this->hitPoints > amount) ? this->hitPoints - amount : 0;
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage! Hit points are now: " << this->hitPoints << "\n";
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->hitPoints == 0 || this->energyPoints == 0) {
		std::cout << "ClapTrap " << this->name << " cannot repair itself!\n";
		return ;
	}
	this->energyPoints--;
	this->hitPoints += amount;
	std::cout << "ClapTrap " << this->name << " repairs itself, recovering " << amount << " hit points, hit points are now " << this->hitPoints << "\n";
}
