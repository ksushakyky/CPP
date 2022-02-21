/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:12:23 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/04 15:47:02 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog(): Animal()
{
    std::cout << "Default constructor from the Dog class called" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog &value)
{
    std::cout << type << "Copy constructor from the Dog class called" << std::endl;
    *this = value;
}

Dog::~Dog()
{
    std::cout << "Destructor from the Dog class called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "Woof Woof" << std::endl;
}

Dog& Dog::operator=(const Dog &value)
{
    if (this != &value)
		Animal::operator=(value);
	return *this;
        
}
