/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:06:52 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/08 13:09:58 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default constructor from the Brain class called" << std::endl;
}

Brain::Brain(const Brain &value)
{
    std::cout << "Copy constructor from the Brain class called" << std::endl;
    *this = value;
}

Brain::~Brain()
{
    std::cout << "Destructor from the Brain class called" << std::endl;
}

Brain& Brain::operator=(const Brain &value)
{
    if (this != &value)
    {
        for (int i = 0; i < 100; i++)
		    ideas[i] = value.ideas[i];
    }
	return *this;
}


