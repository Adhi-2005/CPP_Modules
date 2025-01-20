/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhil <adhil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:53:06 by adhil             #+#    #+#             */
/*   Updated: 2025/01/20 13:59:18 by adhil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon): name(name), weapon(weapon){}

void HumanA::attack() const
{
	std::cout<< name << " attack with their " << weapon.getType() << "\n";
}