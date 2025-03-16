/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:00:55 by adhi-2005         #+#    #+#             */
/*   Updated: 2025/03/16 14:58:37 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
	std::string type;

public:
	Animal();
	Animal(const Animal& other);
	virtual ~Animal();
	
	Animal& operator=(const Animal& other);
	
	std::string getType() const;
	virtual void makeSound() const;
};

#endif