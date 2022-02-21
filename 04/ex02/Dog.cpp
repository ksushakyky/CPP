/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:12:23 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/06 17:04:55 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog(): Animal()
{
    std::cout << "Default constructor from the Dog class called" << std::endl;
    type = "Dog";
    brain = new Brain();
}

Dog::Dog(const Dog &value)
{
    std::cout << type << "Copy constructor from the Dog class called" << std::endl;
    brain = new Brain(*value.brain);
    *this = value;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Destructor from the Dog class called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "Woof Woof" << std::endl;
}

Brain* Dog::getBrain(void) const
{
    return brain;
}

Dog& Dog::operator=(const Dog &value)
{
	if (this != &value) 
    {
		this->type = value.type;
		*brain = *value.brain;
	}
	return *this;
}
