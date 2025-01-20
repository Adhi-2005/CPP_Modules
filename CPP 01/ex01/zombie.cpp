/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhil <adhil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 14:32:07 by adshafee          #+#    #+#             */
/*   Updated: 2025/01/20 10:28:38 by adhil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::Zombie() : name(""){}

Zombie::~Zombie(){
	std::cout<< name << " destroyed\n";
}

void Zombie::setName(std::string setN)
{
	name = setN;
}

void Zombie::announce() const{
	std::cout<< name << " created\n";
}