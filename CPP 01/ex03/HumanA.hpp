/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhil <adhil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:37:07 by adhil             #+#    #+#             */
/*   Updated: 2025/01/20 14:40:49 by adhil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{

	private:
		std::string name;
		Weapon& weapon;
	
	public:
		HumanA(const std::string& name, Weapon& weapon);

		void attack() const;
};

#endif