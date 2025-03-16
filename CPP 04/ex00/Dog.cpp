/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:31:29 by adhi-2005         #+#    #+#             */
/*   Updated: 2025/03/16 14:29:31 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	type = "Dog";
	std::cout << "Dog created\n";
}

Dog::Dog(const Dog& other) {
	*this = other;
	std::cout << "Dog copied\n";
}

Dog::~Dog() {
	std::cout << "Dog destroyed\n";
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof! Woof!\n";
}
