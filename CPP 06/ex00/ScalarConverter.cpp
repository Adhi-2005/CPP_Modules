#include "ScalarConverter.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <limits>
#include <cctype>

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter&) {}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter&) { return *this; }
ScalarConverter::~ScalarConverter() {}

enum LiteralType {
	TYPE_CHAR,
	TYPE_INT,
	TYPE_FLOAT,
	TYPE_DOUBLE,
	TYPE_PSEUDO,
	TYPE_INVALID
};

static bool isPseudoLiteral(const std::string& str) {
	return (str == "nan" || str == "+inf" || str == "-inf" ||
			str == "nanf" || str == "+inff" || str == "-inff");
}

static bool isCharLiteral(const std::string& str) {
	return str.length() == 1 && !isdigit(str[0]) && isprint(str[0]);
}

static LiteralType detectType(const std::string& str) {
	if (isCharLiteral(str))
		return TYPE_CHAR;
	if (isPseudoLiteral(str))
		return TYPE_PSEUDO;
	if (str.length() > 1 && str[str.length() - 1] == 'f' && str.find('.') != std::string::npos)
		return TYPE_FLOAT;
	if (str.find('.') != std::string::npos)
		return TYPE_DOUBLE;

	for (size_t i = 0; i < str.length(); ++i) {
		if (i == 0 && (str[i] == '-' || str[i] == '+')) continue;
		if (!isdigit(str[i])) return TYPE_INVALID;
	}
	return TYPE_INT;
}

static void printImpossible() {
	std::cout << "char: impossible\n";
	std::cout << "int: impossible\n";
	std::cout << "float: impossible\n";
	std::cout << "double: impossible\n";
}

void ScalarConverter::convert(const std::string& literal) {
	if (literal.empty())
		return printImpossible();

	LiteralType type = detectType(literal);
	std::cout << std::fixed << std::setprecision(1);

	switch (type) {
		case TYPE_CHAR: {
			char c = literal[0];
			std::cout << "char: '" << c << "'\n";
			std::cout << "int: " << static_cast<int>(c) << "\n";
			std::cout << "float: " << static_cast<float>(c) << "f\n";
			std::cout << "double: " << static_cast<double>(c) << "\n";
			break;
		}
		case TYPE_PSEUDO: {
			std::string base = literal.substr(0, literal.length() - ((literal[literal.length() - 1] == 'f') ? 1 : 0));
			std::cout << "char: impossible\n";
			std::cout << "int: impossible\n";
			std::cout << "float: " << base << "f\n";
			std::cout << "double: " << base << "\n";
			break;
		}
		case TYPE_INT: {
			char* end;
			long i = std::strtol(literal.c_str(), &end, 10);
			if (*end != '\0' || i < std::numeric_limits<int>::min() || i > std::numeric_limits<int>::max())
				return printImpossible();

			if (i < 0 || i > 127 || !isprint(static_cast<int>(i)))
				std::cout << "char: Non displayable\n";
			else
				std::cout << "char: '" << static_cast<char>(i) << "'\n";
			std::cout << "int: " << static_cast<int>(i) << "\n";
			std::cout << "float: " << static_cast<float>(i) << "f\n";
			std::cout << "double: " << static_cast<double>(i) << "\n";
			break;
		}
		case TYPE_FLOAT: {
			char* end;
			float f = std::strtof(literal.c_str(), &end);
			if (*end != 'f' || *(end + 1) != '\0')
				return printImpossible();

			if (f < 0 || f > 127 || !isprint(static_cast<int>(f)))
				std::cout << "char: Non displayable\n";
			else
				std::cout << "char: '" << static_cast<char>(f) << "'\n";
			std::cout << "int: " << static_cast<int>(f) << "\n";
			std::cout << "float: " << f << "f\n";
			std::cout << "double: " << static_cast<double>(f) << "\n";
			break;
		}
		case TYPE_DOUBLE: {
			char* end;
			double d = std::strtod(literal.c_str(), &end);
			if (*end != '\0')
				return printImpossible();

			if (d < 0 || d > 127 || !isprint(static_cast<int>(d)))
				std::cout << "char: Non displayable\n";
			else
				std::cout << "char: '" << static_cast<char>(d) << "'\n";
			std::cout << "int: " << static_cast<int>(d) << "\n";
			std::cout << "float: " << static_cast<float>(d) << "f\n";
			std::cout << "double: " << d << "\n";
			break;
		}
		case TYPE_INVALID:
		default:
			printImpossible();
	}
}
