/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhi-2005 <adhi-2005@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:26:21 by adhi-2005         #+#    #+#             */
/*   Updated: 2025/02/08 14:29:28 by adhi-2005        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << "Animal constructor called!\n";
}

Animal::~Animal() {
	std::cout << "Animal destructor called!\n";
}

void Animal::makeSound() const{
	std::cout << "Some generic animal sound!\n";
}

std::string Animal::getType() const {
	return type;
}
