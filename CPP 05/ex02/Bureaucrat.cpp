#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name) {
	if (grade < 1) throw GradeTooHighException();
	if (grade > 150) throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor Called\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade) {
	std::cout << "Copy Constructor called\n";
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	if (this != &other) grade = other.grade;
	return *this;
}

const std::string& Bureaucrat::getName() const { return name; }
int Bureaucrat::getGrade() const { return grade; }

void Bureaucrat::incrementGrade() {
	if (grade == 1) throw GradeTooHighException();
	grade--;
}

void Bureaucrat::decrementGrade() {
	if (grade == 150) throw GradeTooLowException();
	grade++;
}

void Bureaucrat::signForm(AForm& form) const {
	try {
		form.beSigned(*this);
		std::cout << name << " signed " << form.getName() << std::endl;
	} catch (std::exception& e) {
		std::cout << name << " couldn’t sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & form) const {
	try {
		form.execute(*this);
		std::cout << name << " executed " << form.getName() << std::endl;
	} catch (std::exception& e) {
		std::cout << name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too low!";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) {
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return os;
}
