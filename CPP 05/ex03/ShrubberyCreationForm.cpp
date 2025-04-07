#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <string>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: AForm("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (!getIsSigned()) throw AForm::FormNotSignedException();
	if (executor.getGrade() > getExecGrade()) throw AForm::GradeTooLowException();

	std::ofstream file((target + "_shrubbery").c_str());
	file << "ASCII TREE\n";
	file << "  *  \n *** \n*****\n  |  \n";
	file.close();
}
