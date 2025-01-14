/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhil <adhil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:30:38 by adshafee          #+#    #+#             */
/*   Updated: 2025/01/14 22:17:01 by adhil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i = 1;
	int	j = 0;

	if (ac == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (av[i])
		{
			j = 0;
			while(av[i][j])
			{
				std::cout<< (char)toupper(av[i][j]);
				j++;
			}
			i++;
		}
	}
	std::cout<<std::endl;
	return 0;
}
