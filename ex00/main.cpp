/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 15:56:01 by mrojouan          #+#    #+#             */
/*   Updated: 2026/06/24 15:57:43 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie* zombie;

    zombie = newZombie("Foo");
    zombie->announce();

    randomChump("Bar");
    delete zombie;

    return (0);
}
