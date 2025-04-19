#include <iostream>
#include <cstdlib>
#include <ctime>    
#include "identify.hpp"

Base* generate(void) {
	std::srand(std::time(NULL));

	int r = std::rand() % 3;
	switch (r) {
		case 0:
			std::cout << "Generated: A\n";
			return new A;
		case 1:
			std::cout << "Generated: B\n";
			return new B;
		default:
			std::cout << "Generated: C\n";
			return new C;
	}
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "Identified by pointer: A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "Identified by pointer: B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "Identified by pointer: C\n";
	else
		std::cout << "Identified by pointer: Unknown type\n";
}

void identify(Base& p) {
	try {
		A& a = dynamic_cast<A&>(p);
		std::cout << "Identified by reference: A\n";
		(void)a;
		return;
	} catch (...) {}

	try {
		B& b = dynamic_cast<B&>(p);
		std::cout << "Identified by reference: B\n";
		(void)b;
		return;
	} catch (...) {}

	try {
		C& c = dynamic_cast<C&>(p);
		std::cout << "Identified by reference: C\n";
		(void)c;
		return;
	} catch (...) {}

	std::cout << "Identified by reference: Unknown type\n";
}