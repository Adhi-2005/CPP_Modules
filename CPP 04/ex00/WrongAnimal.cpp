/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhi-2005 <adhi-2005@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:42:40 by adhi-2005         #+#    #+#             */
/*   Updated: 2025/02/08 14:49:12 by adhi-2005        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal"){
	std::cout << "WrongAnimal constructor called!\n";
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor called\n";
}

void WrongAnimal::makeSound() const{
	std::cout << "WrongAnimal sound!\n";
}
