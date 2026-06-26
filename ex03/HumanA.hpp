/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 09:28:43 by mrojouan          #+#    #+#             */
/*   Updated: 2026/06/26 10:27:20 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <Weapon.hpp>

class HumanA 
{

	private:
		
		Weapon&		weapon;
		std::string	name;

	public:
		
		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);
		void	attack(void);

};

#endif