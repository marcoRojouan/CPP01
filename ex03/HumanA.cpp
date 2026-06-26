/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 09:28:39 by mrojouan          #+#    #+#             */
/*   Updated: 2026/06/26 10:49:33 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon), name(name)
{
	this->name = name;
	this->weapon = weapon;
	return ;
}
		

HumanA::~HumanA(void)
{
	return ;
}
		

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}