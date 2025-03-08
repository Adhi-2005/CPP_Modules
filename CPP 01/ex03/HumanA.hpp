/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:37:07 by adhil             #+#    #+#             */
/*   Updated: 2025/03/08 10:41:12 by adshafee         ###   ########.fr       */
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
		HumanA(std::string name, Weapon& weapon);
		void attack() const;
};

#endif