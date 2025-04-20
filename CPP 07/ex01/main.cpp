#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T>
void printElement(T const &elem) {
	std::cout << elem << std::endl;
}

int main() {
	int intArr[] = {1, 2, 3, 4, 5};
	std::cout << "Integer array:" << std::endl;
	::iter(intArr, 5, printElement);

	std::string strArr[] = {"apple", "banana", "cherry"};
	std::cout << "\nString array:" << std::endl;
	::iter(strArr, 3, printElement);

	return 0;
}