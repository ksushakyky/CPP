/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:12:16 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/04 15:42:05 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat(): Animal()
{
    std::cout << "Default constructor from the Cat class called" << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat &value)
{
    std::cout << type << "Copy constructor from the Cat class called" << std::endl;
    *this = value;
}

Cat::~Cat()
{
    std::cout << "Destructor from the Cat class called" << std::endl;
}

Cat& Cat::operator=(const Cat &value)
{
	if (this != &value)
		Animal::operator=(value);
	return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "Meow Meow" << std::endl;
}
