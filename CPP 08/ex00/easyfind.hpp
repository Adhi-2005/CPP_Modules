#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>
#include <iterator>

template <typename T>
typename T::iterator easyfind(T& container, int value);

class NotFoundException : public std::exception{
	public:
		const char* what() const throw() {
			return  "Value not found in the container";
		}
};

#include "easyfind.tpp"


#endif