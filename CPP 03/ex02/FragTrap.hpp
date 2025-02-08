/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhi-2005 <adhi-2005@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 07:34:10 by adhi-2005         #+#    #+#             */
/*   Updated: 2025/02/08 07:47:32 by adhi-2005        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap{
	public:
		FragTrap(std::string name);
		~FragTrap();

		void highFivesGuys();
};

#endif