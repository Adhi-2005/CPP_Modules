#include "AForm.hpp"

AForm::AForm(const std::string& name, int signGrade, int execGrade) : name(name), isSigned(false), signGrade(signGrade), execGrade(execGrade) {
	if (signGrade < 1 || execGrade < 1) throw GradeTooHighException();
	if (signGrade > 150 || execGrade > 150) throw GradeTooLowException();
}

AForm::~AForm() {}

AForm::AForm(const AForm& other) : name(other.name), isSigned(other.isSigned), signGrade(other.signGrade), execGrade(other.execGrade) {}

AForm& AForm::operator=(const AForm& other) {
	if (this != &other) isSigned = other.isSigned;
	return *this;
}

const std::string& AForm::getName() const { return name; }
bool AForm::getIsSigned() const { return isSigned; }
int AForm::getSignGrade() const { return signGrade; }
int AForm::getExecGrade() const { return execGrade; }

void AForm::beSigned(const Bureaucrat& b) {
	if (b.getGrade() > signGrade) throw GradeTooLowException();
	isSigned = true;
}

const char* AForm::GradeTooHighException::what() const throw() { return "Grade too high!"; }
const char* AForm::GradeTooLowException::what() const throw() { return "Grade too low!"; }
const char* AForm::FormNotSignedException::what() const throw() { return "Form not signed!"; }

std::ostream& operator<<(std::ostream& os, const AForm& form) {
	os << form.getName() << " form, Sign Grade: " << form.getSignGrade() << ", Exec Grade: " << form.getExecGrade() << ", Signed: " << (form.getIsSigned() ? "Yes" : "No");
	return os;
}
