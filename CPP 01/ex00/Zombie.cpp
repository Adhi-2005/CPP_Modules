/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 09:16:31 by adshafee          #+#    #+#             */
/*   Updated: 2025/03/08 09:16:32 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) :name(name)
{
	std::cout<< name << " is created...\n";
}

Zombie::~Zombie()
{
	std::cout<< name << " Destroyed...\n";
}

void Zombie::announce() const{
	std::cout<< name << ": BraiiiiiiinnnzzzZ...\n";
}