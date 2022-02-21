/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:36:47 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/18 13:40:35 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <math.h>

class Convert
{
private:
	std::string	argv;
	int                 flag;
	int                 flag_c;
	char				simb;
    long				int_num;
	float				f_num;
	double				d_num;
public:
	Convert();
	Convert(char *_argv);
	Convert(const Convert &value);
	~Convert();
	Convert &operator=(const Convert &value);
	std::string	const getArgv(void) const;
	void	print_velue();
	int		pars();
	void	toChar();
	void    toInt();
	void	toFloat();
	void	toDouble();
};

#endif