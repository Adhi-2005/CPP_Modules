/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhi-2005 <adhi-2005@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 06:57:14 by adhi-2005         #+#    #+#             */
/*   Updated: 2025/02/08 07:18:23 by adhi-2005        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	public:
		ScavTrap(std::string name);
		~ScavTrap();

		void attack(const std::string& target);

		void guardGate();
};

#endif