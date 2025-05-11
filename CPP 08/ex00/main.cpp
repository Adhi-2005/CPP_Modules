#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main() {
	try {
		int arr1[] = {10, 20, 30, 40, 50};
		std::vector<int> vec(arr1, arr1 + sizeof(arr1) / sizeof(int));

		int arr2[] = {5, 15, 25, 35};
		std::list<int> lst(arr2, arr2 + sizeof(arr2) / sizeof(int));

		std::cout << "Searching in vector:" << std::endl;
		std::vector<int>::iterator itVec = easyfind(vec, 30);
		std::cout << "Found: " << *itVec << std::endl;

		std::cout << "Searching in list:" << std::endl;
		std::list<int>::iterator itList = easyfind(lst, 15);
		std::cout << "Found: " << *itList << std::endl;

		std::cout << "Trying to find 100 in vector:" << std::endl;
		easyfind(vec, 100); // This should throw
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
