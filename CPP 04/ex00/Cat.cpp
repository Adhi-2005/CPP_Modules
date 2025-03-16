/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:36:06 by adhi-2005         #+#    #+#             */
/*   Updated: 2025/03/16 14:30:16 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	std::cout << "Cat created\n";
}

Cat::Cat(const Cat& other) {
	*this = other;
	std::cout << "Cat copied\n";
}

Cat::~Cat() {
	std::cout << "Cat destroyed\n";
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow! Meow!\n";
}
