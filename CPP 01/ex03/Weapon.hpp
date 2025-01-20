/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhil <adhil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:53:05 by adhil             #+#    #+#             */
/*   Updated: 2025/01/20 14:57:18 by adhil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon{
	
	private:
		std::string type;
	
	public :
		Weapon(const std::string &initialType);
		const std::string& getType() const;
		void setType(std::string newType);
};

#endif