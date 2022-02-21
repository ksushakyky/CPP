/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:54:34 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/05 14:28:09 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    std::cout << "Default constructor from the FragTrap class called" << std::endl;
}

FragTrap::FragTrap(std::string _name): ClapTrap(_name)
{
    std::cout << "Constructor from the FragTrap class called" << std::endl;
    hitpoints = 100;
    energy_points = 100;
    attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &value): ClapTrap(value)
{
    std::cout << "Copy constructor from the FrapTrap class called" << std::endl;
    *this = value;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor from the FrapTrap class called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &value)
{
        if (this != &value)
	{
		ClapTrap::operator=(value);
	}	
	return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "High Fives Guys!" << std::endl;
}