#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat b1("Adhil", 2);
		std::cout << b1 << std::endl;

		b1.incrementGrade();
		std::cout << b1 << std::endl;

		b1.incrementGrade();
	}
	catch (std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		Bureaucrat b2("Low Rank", 150);
		std::cout << b2 << std::endl;

		b2.decrementGrade();
	}
	catch (std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		Bureaucrat b3("Invalid", 200);
	}
	catch (std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
}