/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:01:19 by adhil             #+#    #+#             */
/*   Updated: 2025/01/22 13:03:59 by adshafee         ###   ########.fr       */
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
		HumanB(const std::string &name);
		HumanB(const std::string &name, Weapon *weapon);

		void attack()const;
		void setWeapon(Weapon& newWeapon);

};

#endif