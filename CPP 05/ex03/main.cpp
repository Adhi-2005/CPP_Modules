#include "Intern.hpp"

int main() {
	Intern someRandomIntern;

	AForm* form1 = someRandomIntern.makeForm("shrubbery creation", "Bender");

	if (form1)
		delete form1;

	AForm* form2 = someRandomIntern.makeForm("Invalid Form", "target");

	if (form2)
		delete form2;

	return 0;
}
