/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhi-2005 <adhi-2005@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 13:42:39 by adhi-2005         #+#    #+#             */
/*   Updated: 2025/02/07 17:14:18 by adhi-2005        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedPointValue(0) {
	std::cout <<"Default constructor called\n";
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called\n";
	fixedPointValue = value << fractionalBits;
}

Fixed::Fixed(const float value){
	std::cout << "Float constructor called\n";
	fixedPointValue = roundf(value * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed &other){
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &other)
		fixedPointValue = other.fixedPointValue;
	return (*this);
}

Fixed::~Fixed(){
	std::cout << "Destructor Called\n";
}

float Fixed::toFloat() const{
	return static_cast<float>(fixedPointValue)/(1 << fractionalBits);
}

int Fixed::toInt()const{
	return fixedPointValue >> fractionalBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}
