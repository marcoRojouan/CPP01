/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 15:07:19 by mrojouan          #+#    #+#             */
/*   Updated: 2026/06/24 16:27:06 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->name;
	std::cout << " has been destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name;
	std::cout << " : BraiiiiiiinnnzzzZ..." << std::endl; 
}