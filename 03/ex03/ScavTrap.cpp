/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:55:35 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/05 14:31:50 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "Default constructor from the ScavTrap class called" << std::endl;
}

ScavTrap::ScavTrap(std::string _name): ClapTrap(_name)
{
    std::cout << "Constructor from the ScavTrap class called" << std::endl;
    hitpoints = 100;
    energy_points = 50;
    attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &value): ClapTrap(value)
{
    std::cout << "Copy constructor from the ScavTrap class called" << std::endl;
    *this = value;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &value)
{
    if (this != &value)
	{
		ClapTrap::operator=(value);
	}	
	return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor from the ScavTrap class called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << this->name << " have enterred in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
    std::cout << "ScavTrap " << this->name << " attack " << target << " causing " << getAttackDamage() << " points of damage!" << std::endl;
}