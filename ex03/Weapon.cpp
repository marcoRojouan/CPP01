/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 09:28:49 by mrojouan          #+#    #+#             */
/*   Updated: 2026/06/26 10:49:23 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

Weapon::Weapon(std::string type)
{
	setType(type);
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

const std::string& Weapon::getType(void) const
{
	return this->type;
}

void Weapon::setType(const std::string& newType)
{
	this->type = newType;
}