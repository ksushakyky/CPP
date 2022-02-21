/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 13:59:06 by maragorn          #+#    #+#             */
/*   Updated: 2021/09/30 13:59:07 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_H
#define REPLACE_H

#include <iostream>
#include <fstream>

struct value
{
    std::ifstream	file;
    std::ofstream   newfile;  
    std::string     str;
    std::string     filename;
    std::string     tmp;
    std::string     s1;
    std::string     s2;
    int             pos;
};

#endif