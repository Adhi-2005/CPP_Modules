#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat john("John Doe", 2);
		std::cout << john << std::endl;

		john.incrementGrade();
		std::cout << john << std::endl;

		john.incrementGrade(); // Should throw GradeTooHighException
	} catch (std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try {
		Bureaucrat jane("Jane Smith", 149);
		std::cout << jane << std::endl;

		jane.decrementGrade();
		std::cout << jane << std::endl;

		jane.decrementGrade(); // Should throw GradeTooLowException
	} catch (std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try {
		Bureaucrat invalid("Invalid Bureaucrat", 200); // Should throw exception
	} catch (std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}
