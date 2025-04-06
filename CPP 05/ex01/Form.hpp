#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form{
	private:
		const std::string name;
		bool isSigned;
		const int signGrade;
		const int executeGrade;
	public:
		class GradeTooHighException : public std::exception{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public:
				const char* what() const throw();
		};

		void beSigned();
		void signForm();
		
};

#endif