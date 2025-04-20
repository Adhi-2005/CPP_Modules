#include <iostream>
#include "Array.hpp"

int main() {
	try {
		Array<int> arr(5);
		for (unsigned int i = 0; i < arr.size(); ++i)
			arr[i] = i * 10;

		std::cout << "Array contents:" << std::endl;
		for (unsigned int i = 0; i < arr.size(); ++i)
			std::cout << arr[i] << " ";
		std::cout << std::endl;

		Array<int> copy = arr;
		copy[0] = 999;

		std::cout << "Copy after modification:" << std::endl;
		for (unsigned int i = 0; i < copy.size(); ++i)
			std::cout << copy[i] << " ";
		std::cout << std::endl;

		std::cout << "Original remains unchanged:" << std::endl;
		for (unsigned int i = 0; i < arr.size(); ++i)
			std::cout << arr[i] << " ";
		std::cout << std::endl;

		std::cout << "Out-of-bounds access test:" << std::endl;
		std::cout << arr[100] << std::endl;

	} catch (std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
