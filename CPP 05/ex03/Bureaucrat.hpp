#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
private:
	const std::string name;
	int grade;

public:
	Bureaucrat(const std::string& name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat& other);

	const std::string& getName() const;
	int getGrade() const;

	void incrementGrade();
	void decrementGrade();

	void signForm(AForm& form) const;
	void executeForm(AForm const & form) const;

	class GradeTooHighException : public std::exception {
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif
