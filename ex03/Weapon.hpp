/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 09:28:45 by mrojouan          #+#    #+#             */
/*   Updated: 2026/06/26 10:07:31 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon 
{

	private:

		std::string type;

	public:
		
		Weapon(std::string type);
		~Weapon(void);
		const std::string&	getType(void) const;
		void				setType(const std::string& newType);

};

#endif