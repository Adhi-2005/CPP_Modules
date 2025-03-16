/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:42:40 by adhi-2005         #+#    #+#             */
/*   Updated: 2025/03/16 14:31:35 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << "WrongAnimal created\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	*this = other;
	std::cout << "WrongAnimal copied\n";
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destroyed\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

std::string WrongAnimal::getType() const {
	return type;
}

void WrongAnimal::makeSound() const {
	std::cout << "Wrong generic animal sound\n";
}
