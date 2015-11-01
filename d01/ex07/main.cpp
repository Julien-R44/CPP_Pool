/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 00:55:21 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/01 02:50:06 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void replaceAll(std::string& str, const std::string s1, const std::string s2) {
	size_t start_pos = 0;

    while ((start_pos = str.find(s1, start_pos)) != std::string::npos) {
        str.replace(start_pos, s1.length(), s2);
        start_pos += s2.length();
    }
}

int	main(int ac, char **av)
{
	if (ac != 4 || std::string(av[2]).empty() || std::string(av[3]).empty()) {
		std::cout << "usage: ./replace <filename> <s1> <s2>" << std::endl;
		return (0);
	}

	std::ifstream		ifs(av[1]);
	std::string			tmpLign;
	std::string			fileContent;
	const std::string	newFilename = std::string(av[1]) + ".replace";

	if (ifs) {
		while (getline(ifs, tmpLign)) {	fileContent += tmpLign + "\n"; }
		ifs.close();
		replaceAll(fileContent, av[2], av[3]);

		std::ofstream	ofs(newFilename.c_str());

		if (ofs) {
			ofs << fileContent;
			ofs.close();
		} else {std::cout << "Error: Can't open new file." << std::endl; }
	} else { std::cout << "Error: Can't open this file." << std::endl; }
	return (0);
}
