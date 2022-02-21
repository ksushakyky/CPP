/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:55:12 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/05 14:43:19 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap()
{
	ClapTrap::setName(name + "_clap_name");
	std::cout << "Default constructor from the DiamondTrap class called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string _name): ClapTrap(_name + "_clap_name")
{
	std::cout << "Constructor from the DiamondTrap class called" << std::endl;
	name = _name;
    hitpoints = FragTrap::getHitpoints();
    energy_points = ScavTrap::getEnergyPoints();
    attack_damage = FragTrap::getAttackDamage();
}

DiamondTrap::DiamondTrap(const DiamondTrap &value)
{
	std::cout << "Copy constructor from the DiamondTrap class called" << std::endl;
    *this = value;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor from the DiamondTrap class called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &value)
{
	if (this != &value)
	{
		ClapTrap::operator=(value);
	}	
	return *this;
}

void DiamondTrap::attack(std::string const &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::getName() << std::endl;
}