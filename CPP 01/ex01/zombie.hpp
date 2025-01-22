/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 14:32:35 by adshafee          #+#    #+#             */
/*   Updated: 2025/01/22 13:06:56 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
	private :
		std::string name;

	public :
		Zombie();
		void setName(std::string setN);
		~Zombie();
		
		void announce() const;
};

	Zombie* zombieHorde(int N, std::string name);

#endif