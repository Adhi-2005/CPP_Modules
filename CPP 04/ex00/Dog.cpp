/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhi-2005 <adhi-2005@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:31:29 by adhi-2005         #+#    #+#             */
/*   Updated: 2025/02/08 14:33:16 by adhi-2005        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	type = "Dog";
	std::cout << "Dog constructor called!\n";
}

Dog::~Dog(){
	std::cout << "Dog destructor called\n";
}

void Dog::makeSound() const{
	std::cout << "Woof!\n";
}