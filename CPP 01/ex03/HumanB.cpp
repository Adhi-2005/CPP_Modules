/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:42:37 by adhil             #+#    #+#             */
/*   Updated: 2025/03/08 10:44:16 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}

void HumanB::setWeapon(Weapon& newWeapon){
	weapon = &newWeapon;
}

void HumanB::attack() const{
	if(weapon)
		std::cout << name << " attacks with their " << weapon->getType() << "\n";
	else
		std::cout << "\n" << name << " has no weapon to attack with!\n";
}