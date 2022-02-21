/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:19:24 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/04 14:27:39 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("")
{
    std::cout << "Default constructor from the WrongAnimal class called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &value)
{
    std::cout << type << "Copy constructor from the WrongAnimal class called" << std::endl;
    *this = value;
    
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor from the WrongAnimal class called" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return this->type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &_type)
{
	this->type = _type.getType();
	return *this;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "No sound!" << std::endl;
}