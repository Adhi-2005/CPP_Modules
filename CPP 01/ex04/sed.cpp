/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 11:23:49 by adshafee          #+#    #+#             */
/*   Updated: 2025/01/23 14:14:07 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

Replace::Replace(std::string &filename, std::string &s1, std::string &s2): filename(filename), s1(s1), s2(s2){}

void Replace::processFile() const{
	std::cout<< filename << "\n" << s1 << "\n" << s2 << "\n";
	if (s1.empty()){
		std::cerr << "Error: s1 is empty";
		return;
	}
	if (s2.empty())
	{
		std::cerr<< "Error: s2 is empty";
		return;
	}
	std::ifstream inputFile(filename);
	if (!inputFile.is_open()){
		std::cerr<< "Error: Can't open the file";
		return ;
	}
	std::ofstream outputFile(filename + ".replace");
	if (!outputFile.is_open())
	{
		std::cerr<< "Error: Can't Create the file";
		return ;
	}

	std::string line;
	while (std::getline(inputFile, line))
	{
		size_t position = 0;
		while((position = line.find(s1, position)) != std::string::npos)
		{
			line.replace(position, s1.length(), s2);
			position += s2.length();
		}
		outputFile << line << "\n";
	}
	inputFile.close();
	outputFile.close();
	std::cout<< "File Processed Successfully...";
}
