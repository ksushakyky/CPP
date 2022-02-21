/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:53:45 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/18 13:34:06 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() {}

Convert::Convert(char *_argv) : argv(_argv), flag(0)
{
}

Convert::Convert(const Convert &value)
{
    *this = value;
}

Convert::~Convert() {}

Convert& Convert::operator=(const Convert &value) {
	if (this == &value)
		return *this;
	return *this;
}

int Convert::pars()
{
	int pos = 0;
	flag = 1;

	if (argv == "-inf" || argv == "+inf" || argv == "nan" ||
		argv == "-inff" || argv == "+inff" || argv == "nanf")
		flag = 3;
	else if ((pos = argv.find(".")) != -1)
	{
		if (argv[pos + 1] == '.' || argv[pos + 1] == '\0')
			throw std::string("invalid argument");
		else
		{
			pos++;
			for(int i = pos; argv[i]; i++)
			{
				if (!(argv[i] >= '0' && argv[i] <= '9') && argv[i] != 'f')
					throw std::string("invalid argument");
			}
		}
		if (argv[pos] == '0' && (argv[pos + 1] == '\0' ||  argv[pos + 1] == 'f'))
			flag = 1;
		else if (argv.find("0", pos, pos) == std::string::npos
			|| argv.find("0", pos, argv[pos + 1]) == std::string::npos)
		{
				flag = 0;
		}
	}
	else
	{
		for(int i = 0; argv[i]; i++)
		{
			if ((argv[i] == '-' || argv[i] == '+'))
				i++;
			if (!(argv[i] >= '0' && argv[i] <= '9'))
				throw std::string("invalid argument");
		}
	}
	toDouble();
	return 0;
}

void	Convert::toChar()
{
	if (d_num < CHAR_MAX && d_num > CHAR_MIN) 
	{
		simb = static_cast<char>(d_num);
		if (std::isgraph(static_cast<unsigned char>(d_num)))
			flag_c = 1;
	}
}

void	Convert::toInt()
{
	if (d_num <= INT_MAX && d_num  <= INT_MIN)
		int_num = static_cast<int>(d_num);
	else
		flag = 3;
}

void	Convert::toFloat()
{
	f_num = static_cast<float>(d_num);
}

void	Convert::toDouble()
{
	char *ptr = nullptr;
	std::string str = argv;
	d_num = std::strtod(str.c_str(), &ptr);
}

void Convert::print_velue()
{
	if (flag_c == 1 && flag != 3)
		std::cout << "char: '" << simb << "'" << std::endl;
	if (flag_c == 0 && flag != 3)
		std::cout << "char: Non displayable" << std::endl;
	if (flag == 3)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" <<  std::endl;
	}	
	if (flag == 1 || d_num == 0)
	{
		if (flag != 3)
			std::cout << "int: " << int_num <<  std::endl;
		std::cout << "float: " << f_num << ".0f" << std::endl;
		std::cout << "double: " << d_num << ".0" << std::endl;
		
	}
	else
	{
		if (flag != 3)
			std::cout << "int: " << int_num <<  std::endl;
		std::cout << "float: " << f_num << "f" << std::endl;
		std::cout << "double: " << d_num <<  std::endl;
	}
}


		