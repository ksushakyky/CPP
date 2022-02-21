/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:12:07 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/04 14:06:32 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("")
{
    std::cout << "Default constructor from the Animal class called" << std::endl;
}

Animal::Animal(Animal const &value)
{
	std::cout << type << "Copy constructor from the Animal class called" << std::endl;
	*this = value;
}

Animal::~Animal()
{
    std::cout << "Destructor from the Animal class called" << std::endl;
}


std::string Animal::getType(void) const
{
    return this->type;
}


Animal& Animal::operator=(const Animal &_type)
{
	this->type = _type.getType();
	return *this;
}

void Animal::makeSound(void) const
{
    std::cout << "No sound!" << std::endl;
}