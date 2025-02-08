/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhi-2005 <adhi-2005@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 23:10:21 by adhi-2005         #+#    #+#             */
/*   Updated: 2025/02/08 06:54:40 by adhi-2005        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap {
	protected:
		std::string name;
		unsigned int hitPoints;
		unsigned int energyPoints;
		unsigned int attackDamage;

	public:
		ClapTrap(std::string const& name);
		~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif