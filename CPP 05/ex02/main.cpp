#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	Bureaucrat boss("CEO", 1);
	Bureaucrat intern("Intern", 150);

	ShrubberyCreationForm shrub("Home");
	RobotomyRequestForm robot("Bender");
	PresidentialPardonForm pardon("Adhil");

	std::cout << shrub << std::endl;
	std::cout << robot << std::endl;
	std::cout << pardon << std::endl;

	try {
		boss.signForm(shrub);
		boss.executeForm(shrub);  // Creates a file with ASCII trees

		boss.signForm(robot);
		boss.executeForm(robot);  // 50% robotomy success

		boss.signForm(pardon);
		boss.executeForm(pardon);  // Adhil gets pardoned
	}
	catch (std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		intern.executeForm(shrub);  // Should throw (grade too low)
	}
	catch (std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
}