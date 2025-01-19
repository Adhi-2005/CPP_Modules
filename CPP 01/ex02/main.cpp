#include <iostream>
#include <string>

int	main()
{
	std::string main_str= "HI THIS IS BRAIN";
	std::string* stringPTR = &main_str;
	std::string& stringREF = main_str;

	std::cout<< "Output from the Main string: " << main_str << "\n";
	std::cout<< "Memory Adrress pointer to by the stringPTR: " << stringPTR << "\n";
	std::cout<< "Memory address held by stringREF: " << stringREF << "\n";
	return (0);
}