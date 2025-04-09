#include "Intern.hpp"

int main() {
	Intern someRandomIntern;
	Bureaucrat boss("Boss", 1);

	AForm* form1 = someRandomIntern.makeForm("robotomy request", "Bender");
	AForm* form2 = someRandomIntern.makeForm("shrubbery creation", "Garden");
	AForm* form3 = someRandomIntern.makeForm("presidential pardon", "Adhil");
	AForm* form4 = someRandomIntern.makeForm("invalid form", "Nobody");

	if (form1) {
		boss.signForm(*form1);
		boss.executeForm(*form1);
		delete form1;
	}
	if (form2) {
		boss.signForm(*form2);
		boss.executeForm(*form2);
		delete form2;
	}
	if (form3) {
		boss.signForm(*form3);
		boss.executeForm(*form3);
		delete form3;
	}
	if (form4) {
		boss.signForm(*form4);
		boss.executeForm(*form4);
		delete form4;
	}

	return 0;
}