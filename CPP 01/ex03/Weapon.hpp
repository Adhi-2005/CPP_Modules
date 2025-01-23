/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:53:05 by adhil             #+#    #+#             */
/*   Updated: 2025/01/23 10:11:31 by adshafee         ###   ########.fr       */
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
		~Weapon();
};

#endif