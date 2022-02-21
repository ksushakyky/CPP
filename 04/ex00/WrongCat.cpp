/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:25:14 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/08 15:21:19 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
    std::cout << "Default constructor from the WrongCat class called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &value)
{
    std::cout << type << "Copy constructor from the WrongCat class called" << std::endl;
    *this = value;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor from the WrongCat class called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &value)
{
    if (this != &value)
        WrongAnimal::operator=(value);
	return *this;
}

void WrongCat::makeSound(void) const
{
    std::cout << "Meow Meow" << std::endl;
}