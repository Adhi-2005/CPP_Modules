/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhi-2005 <adhi-2005@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:31:29 by adhi-2005         #+#    #+#             */
/*   Updated: 2025/02/08 16:26:38 by adhi-2005        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog constructor called!\n";
}

Dog::Dog(const Dog& other) : Animal(other) {
	this->brain = new Brain(*other.brain);
	std::cout << "Dog copy constructor called!" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		Animal::operator=(other);
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	std::cout << "Dog assignment operator called!" << std::endl;
	return *this;
}

Dog::~Dog(){
	delete brain;
	std::cout << "Dog destructor called\n";
}

void Dog::makeSound() const{
	std::cout << "Woof!\n";
}
