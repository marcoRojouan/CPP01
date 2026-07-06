/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 11:32:03 by mrojouan          #+#    #+#             */
/*   Updated: 2026/06/29 15:19:00 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	fileContent_loop (std::ifstream& infile, std::string& fileContent)
{
	std::string		line;

	while (std::getline(infile, line))
	{
		fileContent += line;
		if (!infile.eof())
        	fileContent += '\n';
	}	
}

void	replace_loop(char **av, std::string& fileContent)
{
	std::size_t		pos = 0;
	
	while ((pos = fileContent.find(av[2], pos)) != std::string::npos)
	{
		fileContent.erase(pos, std::string(av[2]).length());
		fileContent.insert(pos, std::string(av[3]));
		pos += std::string(av[3]).length();
	}
}

int main(int ac, char **av)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		fileContent;
	std::string 	outfileName = av[1];

	if (ac != 4)
	{
		std::cout << "Invalid Args." << std::endl;
		return (1);
	}
	infile.open(av[1]);
	if (!infile.is_open())
	{
		std::cout << "Invalid Open: infile" << std::endl;
		return (1);
	}
	fileContent_loop(infile, fileContent);
	replace_loop(av, fileContent);
	outfileName += ".replace";
	outfile.open(outfileName.c_str());
	if (!outfile.is_open())
	{
		std::cout << "Invalid Open: outfile" << std::endl;
		return (1);
	}
	outfile << fileContent;	
	return (0);
}
