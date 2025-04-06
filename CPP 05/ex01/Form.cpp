#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string& name, int signGrade, int execGrade)
	: name(name), isSigned(false), gradeToSign(signGrade), gradeToExecute(execGrade) {
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
}

Form::Form(const Form& other)
	: name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute) {}

Form& Form::operator=(const Form& other) {
	if (this != &other)
		this->isSigned = other.isSigned;
	return *this;
}

Form::~Form() {}

std::string Form::getName() const { return name; }
bool Form::getIsSigned() const { return isSigned; }
int Form::getGradeToSign() const { return gradeToSign; }
int Form::getGradeToExecute() const { return gradeToExecute; }

void Form::beSigned(const Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() > gradeToSign)
		throw GradeTooLowException();
	isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Form grade too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Form grade too low!";
}

std::ostream& operator<<(std::ostream& os, const Form& form) {
	os << "Form: " << form.getName()
	   << ", Signed: " << (form.getIsSigned() ? "Yes" : "No")
	   << ", Grade to Sign: " << form.getGradeToSign()
	   << ", Grade to Execute: " << form.getGradeToExecute();
	return os;
}