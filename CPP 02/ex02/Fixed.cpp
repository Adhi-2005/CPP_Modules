/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhi-2005 <adhi-2005@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:15:08 by adhi-2005         #+#    #+#             */
/*   Updated: 2025/02/07 19:55:37 by adhi-2005        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0){
	std::cout << "Default Constructor called\n";
}

Fixed::Fixed(const int intValue){
	std::cout << "Int Constructor called\n";
	value = intValue << fractionalBits;
}

Fixed::Fixed(const float floatValue){
	std::cout << "Float Constructor called]n";
	value = roundf(floatValue * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed& other) {
	*this = other;
	std::cout << "Copy Construcotr called\n";
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}

Fixed&Fixed::operator=(const Fixed& other) {
	std::cout << "Assignment Operator called\n";
	if (this != &other)
		value = other.value;
	return (*this);
}

bool Fixed::operator>(const Fixed& other) const {
	return value > other.value;
}

bool Fixed::operator<(const Fixed& other) const {
	return value < other.value;
}

bool Fixed::operator>=(const Fixed& other) const {
	return value >= other.value;
}

bool Fixed::operator<=(const Fixed& other) const {
	return value <= other.value;
}

bool Fixed::operator==(const Fixed& other) const {
	return value == other.value;
}

bool Fixed::operator!=(const Fixed& other) const {
	return value != other.value;
}

Fixed Fixed::operator+(const Fixed& other) const {
	return Fixed(toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const {
	return Fixed(toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const {
	return Fixed(toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const {
	if (other.value == 0){
		std::cerr << "Error: Division by zero!\n";
		return Fixed();
	}
	return Fixed(toFloat()/ other.toFloat());
}

Fixed& Fixed::operator++(){
	value++;
	return *this;
}

Fixed Fixed::operator++(int){
	Fixed temp = *this;
	value++;
	return temp;
}

Fixed& Fixed::operator--() {
	value--;
	return *this;
}

Fixed Fixed::operator--(int){
	Fixed temp = *this;
	value--;
	return temp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b){
	return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	return (a > b) ? a : b;
}

int Fixed::toInt() const{
	return value >> fractionalBits;
}

float Fixed::toFloat() const{
	return (float)value / (1 << fractionalBits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
	out << fixed.toFloat();
	return out;
}