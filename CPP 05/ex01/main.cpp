#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	try {
		Bureaucrat b1("Adhil", 50);
		Form f1("Project Approval Form", 30, 20);

		std::cout << f1 << std::endl;
		b1.signForm(f1);

		Bureaucrat b2("Manager", 20);
		b2.signForm(f1);

		std::cout << f1 << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
}