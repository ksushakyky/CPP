/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:12:16 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/07 17:56:51 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(): Animal()
{
    std::cout << "Default constructor from the Cat class called" << std::endl;
    type = "Cat";
    brain = new Brain();
}

Cat::Cat(const Cat &value)
{
    std::cout << type << "Copy constructor from the Cat class called" << std::endl;
    brain = new Brain(*value.brain);
    *this = value;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Destructor from the Cat class called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "Meow Meow" << std::endl;
}

Brain* Cat::getBrain(void) const
{
    return brain;
}

Cat& Cat::operator=(const Cat &value)
{
	if (this != &value) 
    {
		this->type = value.type;
		*brain = *value.brain;
	}
	return *this;
}
