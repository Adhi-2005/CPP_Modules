/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhi-2005 <adhi-2005@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:42:57 by adhi-2005         #+#    #+#             */
/*   Updated: 2025/02/08 16:57:15 by adhi-2005        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int main() {
	// Creating an array of Animal pointers
	Animal* animals[6];

	// Filling the array with Dogs and Cats
	for (int i = 0; i < 3; i++) {
		animals[i] = new Dog();  // Create Dog objects
	}
	for (int i = 3; i < 6; i++) {
		animals[i] = new Cat();  // Create Cat objects
	}

	// Displaying the type and sound of each animal
	std::cout << "\nDisplaying animal types and sounds:\n";
	for (int i = 0; i < 6; i++) {
		std::cout << "Animal Type: " << animals[i]->getType() << std::endl;  // Get the type of animal
		animals[i]->makeSound();  // Call makeSound for each animal
	}

	// Clean up memory
	std::cout << "\nCleaning up memory:\n";
	for (int i = 0; i < 6; i++) {
		delete animals[i];  // Properly delete each animal
	}

	return 0;
}
