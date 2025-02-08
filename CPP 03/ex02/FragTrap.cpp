/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhi-2005 <adhi-2005@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 07:36:20 by adhi-2005         #+#    #+#             */
/*   Updated: 2025/02/08 07:47:28 by adhi-2005        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
	std::cout << "FragTrap " << this->name << " is ready for action!\n";
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << this->name << " has been destroyed!\n";
}

void FragTrap::highFivesGuys(){
	std::cout << "FragTrap " << this->name << " requests a high five!\n";
}
