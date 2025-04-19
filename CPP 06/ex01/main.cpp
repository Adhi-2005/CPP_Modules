#include <iostream>
#include "Serializer.hpp"

int main() {
	Data original;
	original.id = 42;
	original.name = "Adhil";

	std::cout<< "Original pointer: " << &original << "\n";
	std::cout << "Original id: " << original.id << ", Original name: " << original.name << "\n";

	uintptr_t raw = Serializer::serialize(&original);
	Data* recovered = Serializer::deserialize(raw);

	std::cout<< "Recovered pointer: " << recovered << "\n";
	std::cout<< "Recovered data: ID -> " << recovered->id << ", name -> " << recovered->name << "\n";

	if (recovered == &original)
		std::cout<< "Success: Pointers Match. \n";
	else
		std::cout<< "Failure: Pointers Does not Match \n";

	return 0;
}