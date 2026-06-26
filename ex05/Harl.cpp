/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 15:12:58 by mrojouan          #+#    #+#             */
/*   Updated: 2026/06/26 15:16:35 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

Harl::Harl()
{
    levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";
    functions[0] = &Harl::debug;
    functions[1] = &Harl::info;
    functions[2] = &Harl::warning;
    functions[3] = &Harl::error;
}

Harl::Harl()
{
	return ;
}

void Harl::complain(std::string level)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (level == levels[i])
		{
			(this->*functions[i])();
			return ;	
		}
		i++;
	}
}
