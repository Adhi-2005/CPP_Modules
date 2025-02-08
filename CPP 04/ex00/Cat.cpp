/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhi-2005 <adhi-2005@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:36:06 by adhi-2005         #+#    #+#             */
/*   Updated: 2025/02/08 14:40:13 by adhi-2005        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	type = "Cat";
	std::cout << "Cat Constructor Called\n";
}

Cat::~Cat(){
	std::cout << "Cat destructor called\n";
}

void Cat::makeSound() const {
	std::cout << "Meow!\n";
}
