/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 11:23:55 by adshafee          #+#    #+#             */
/*   Updated: 2025/01/23 14:03:05 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>
# include <cstdlib>
# include <string>

class Replace{
	
		private:
			std::string filename;
			std::string s1;
			std::string s2;

		public:
			Replace(std::string &filename, std::string &s1, std::string &s2);
			void processFile() const;
};

#endif
