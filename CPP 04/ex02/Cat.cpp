/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhi-2005 <adhi-2005@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:36:06 by adhi-2005         #+#    #+#             */
/*   Updated: 2025/02/08 16:50:12 by adhi-2005        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat Constructor Called\n";
}

Cat::Cat(const Cat& other) : Animal(other) {
	this->brain = new Brain(*other.brain);
	std::cout << "Cat copy constructor called!" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other) {
		Animal::operator=(other);
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	std::cout << "Cat assignment operator called!" << std::endl;
	return *this;
}


Cat::~Cat(){
	delete brain;
	std::cout << "Cat destructor called\n";
}

void Cat::makeSound() const {
	std::cout << "Meow!\n";
}
