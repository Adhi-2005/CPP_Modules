/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:26:21 by adhi-2005         #+#    #+#             */
/*   Updated: 2025/03/16 14:27:34 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << "Animal created\n";
}

Animal::Animal(const Animal& other) {
	*this = other;
	std::cout << "Animal copied\n";
}

Animal::~Animal() {
	std::cout << "Animal destroyed\n";
}

Animal& Animal::operator=(const Animal& other) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

std::string Animal::getType() const {
	return type;
}

void Animal::makeSound() const {
	std::cout << "Some generic animal sound\n";
}