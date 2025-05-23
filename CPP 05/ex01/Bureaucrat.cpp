#include "Bureaucrat.hpp"
#include "Form.hpp"

void Bureaucrat::signForm(Form& form) {
	try{
		form.beSigned(*this);
		std::cout << name << " signed " << form.getName() << std::endl;
	} catch (std::exception& e){
		std::cout << name << " couldn't sign " << form.getName()
		<< " because " << e.what() << "\n";
	}
}

const char*Bureaucrat::GradeTooHighExeption::what() const throw() {
	return "Grade too high!";
}

const char*Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too low!";
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade) {
	if(grade < 1)
		throw GradeTooHighExeption();
	if(grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade){
	std::cout << "Copy Constructor called\n";
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other){
	if (this != &other)
		this->grade = other.grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {
	std::cout<< "Destructor Called\n";
}

std::string Bureaucrat::getName()const{
	return name;
}

int Bureaucrat::getGrade() const{
	return grade;
}

void Bureaucrat::incrementGrade(){
	if (grade - 1 < 1)
		throw GradeTooHighExeption();
	grade--;
}

void Bureaucrat::decrementGrade(){
	if (grade + 1 > 150)
		throw GradeTooLowException();
	grade++;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() <<  ".";
	return os;
}