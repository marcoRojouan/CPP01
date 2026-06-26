/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 15:56:01 by mrojouan          #+#    #+#             */
/*   Updated: 2026/06/24 16:34:27 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie* horde;
    int i = 0;
    
    horde = zombieHorde(8, "Patrice");
    while (i < 8)
    {
        horde[i].announce();
        i++;
    }
    delete[] horde;
    
    return (0);
}
