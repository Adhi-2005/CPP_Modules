/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:08:08 by adshafee          #+#    #+#             */
/*   Updated: 2025/01/22 13:08:09 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{

	if (N <= 0)
		return NULL;
	
	Zombie* horde = new Zombie[N];

	int	i = 0;
	while(N > i)
	{
		horde[i].setName(name);
		horde[i].announce();
		i++;
	}

	return horde;
}