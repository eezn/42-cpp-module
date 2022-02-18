/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:45:22 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/18 18:43:48 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace( void ) {}

Replace::Replace( char **argv )
: filepath(argv[1]), s1(argv[2]), s2(argv[3]) {}

Replace::~Replace( void ) {}

// main
void Replace::myReplace( void ) {
	
	if (filepath.empty() || s1.empty() || s2.empty()) {
		std::cerr << YELLOW << "Error: input" << EOC << std::endl;
		return ;
	}
	std::ifstream target_file(filepath);
	if (target_file.fail()) {
		std::cerr << YELLOW << "Error: ifstream" << EOC << std::endl;
		return ;
	}
	std::ofstream result_file(getRawName() + ".replace");
	if (result_file.fail()) {
		std::cerr << YELLOW << "Error: ofstream" << EOC << std::endl;
		return ;
	}

	std::string line;
	const char *c_str;
	unsigned long pos;

	while (!target_file.eof()) {
		std::getline(target_file, line);
		c_str = line.c_str();
		while (*c_str) {
			pos = ((std::string)c_str).find(s1, 0);
			if (pos == std::string::npos)
			{
				result_file << c_str;
				break ;
			}
			result_file << ((std::string)c_str).substr(0, pos);
			result_file << s2;
			c_str += pos;
			c_str += s1.length();
		}
		if (!target_file.eof())
			result_file << std::endl;
	}
	target_file.close();
	result_file.close();
}

std::string Replace::getRawName( void ) {

	size_t lastindex = filepath.find_last_of(".");
	if (lastindex == 0)
		return (filepath);
	return (filepath.substr(0, lastindex));
}
