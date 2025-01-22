/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:08:21 by adshafee          #+#    #+#             */
/*   Updated: 2025/01/22 13:08:22 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main()
{
	int	N = 10;
	std::string name = "Ship";

	Zombie* Horde = zombieHorde(N, name);

	delete[] Horde;
	return (0);
}