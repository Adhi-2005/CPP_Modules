/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:20:22 by adshafee          #+#    #+#             */
/*   Updated: 2025/01/23 13:52:24 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int ac, char **av)
{
	if (ac > 4 || ac < 4)
	{
		std::cout<<"Enter 3 Arguments FORMAT: <filename> string1 string2\n";
		return (0);
	}
	std::string filename = av[1];
	std::string string1 = av[2];
	std::string string2 = av[3];

	Replace replaceLine(filename, string1, string2);
	replaceLine.processFile();

	return 0;
}

