#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: AForm("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (!getIsSigned()) throw AForm::FormNotSignedException();
	if (executor.getGrade() > getExecGrade()) throw AForm::GradeTooLowException();

	std::cout << "* DRILLING NOISES *" << std::endl;

	std::srand(std::time(NULL));
	if (rand() % 2)
		std::cout << target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "Robotomy failed on " << target << "!" << std::endl;
}
