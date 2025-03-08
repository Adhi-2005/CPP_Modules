/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:01:19 by adhil             #+#    #+#             */
/*   Updated: 2025/03/08 11:07:15 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"


class HumanB{
	
	private:
		std::string name;
		Weapon* weapon;

	public:
		HumanB(std::string name);
		void setWeapon(Weapon& newWeapon);
		void attack()const;
};

#endif