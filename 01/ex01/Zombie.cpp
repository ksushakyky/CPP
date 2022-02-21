/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:37:28 by maragorn          #+#    #+#             */
/*   Updated: 2021/09/29 15:17:13 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << Zombie::getName() << " Zombie Destructing" << std::endl;
}

void Zombie::setName(std::string& value)
{
    this->_name = value;
}

std::string Zombie::getName(void)
{
    return (this->_name);
}

void Zombie::announce()
{
    std::cout << Zombie::getName() << " BraiiiiiiinnnzzzZ..." << std::endl;
}


