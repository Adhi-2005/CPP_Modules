/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhi-2005 <adhi-2005@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:56:43 by adhi-2005         #+#    #+#             */
/*   Updated: 2025/02/08 14:58:54 by adhi-2005        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
	type = "WrongCat";
	std::cout << "WrongCat constructor called!\n";
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destrcutor called!\n";
}

void WrongCat::makeSound() const{
	std::cout << "WrongMeow!\n";
}
