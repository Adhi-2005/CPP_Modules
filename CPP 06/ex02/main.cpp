#include <iostream>
#include "identify.hpp"

int main() {
	Base* obj = generate();

	identify(obj);
	identify(*obj);

	delete obj;
	return 0;
}
