/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:42:57 by adhi-2005         #+#    #+#             */
/*   Updated: 2025/03/16 15:03:54 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int main() {
	
	Animal* animals[6];

	
	for (int i = 0; i < 3; i++) {
		animals[i] = new Dog();
	}
	for (int i = 3; i < 6; i++) {
		animals[i] = new Cat();
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
