/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 10:05:44 by adshafee          #+#    #+#             */
/*   Updated: 2025/03/08 11:16:28 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &initialType): type(initialType){}

const std::string& Weapon::getType() const{
	return type;
}

void Weapon::setType(std::string newType){
	type = newType;
}