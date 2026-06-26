/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 15:06:27 by mrojouan          #+#    #+#             */
/*   Updated: 2026/06/26 15:13:43 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl 
{

	private:

		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		
		std::string levels[4];
    	void (Harl::*functions[4])();

	public:
		
		Harl(void);
		~Harl(void);
		void complain( std::string level );

};

#endif