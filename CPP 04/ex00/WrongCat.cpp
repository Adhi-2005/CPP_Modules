/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:56:43 by adhi-2005         #+#    #+#             */
/*   Updated: 2025/03/16 15:03:29 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	type = "WrongCat";
	std::cout << "WrongCat created\n";
}

WrongCat::WrongCat(const WrongCat& other) {
	*this = other;
	std::cout << "WrongCat copied\n";
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destroyed\n";
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "Moo? Meow?\n";
}
