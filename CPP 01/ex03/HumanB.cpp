/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhil <adhil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:42:37 by adhil             #+#    #+#             */
/*   Updated: 2025/01/20 15:04:17 by adhil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : name(name), weapon(NULL) {}
HumanB::HumanB(const std::string& name, Weapon* weapon = NULL) : name(name), weapon(weapon){}
 
void HumanB::attack() const{
	if(weapon)
		std::cout << name << " attacks with their " << weapon->getType() << "\n";
	else
		std::cout << " has no weapon to attack with!\n";
}

void HumanB::setWeapon(Weapon& newWeapon){
	weapon = &newWeapon;
}
