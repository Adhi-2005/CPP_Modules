/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhil <adhil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:01:19 by adhil             #+#    #+#             */
/*   Updated: 2025/01/20 15:00:53 by adhil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMAN_HPP

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