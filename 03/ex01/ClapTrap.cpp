/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:54:00 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/05 14:14:59 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor from the ClapTrap class called" << std::endl;
}

ClapTrap::ClapTrap(std::string _name): name(_name), hitpoints(10), energy_points(10), attack_damage(0)
{
    std::cout << "Constructor from the ClapTrap class called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &value)
{
    std::cout << "Copy constructor from the ClapTrap class called" << std::endl;
    *this = value;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor from the ClapTrap class called" << std::endl;
}

void ClapTrap::setName(std::string value)
{
    this->name = value;
}

std::string ClapTrap::getName(void) const
{
    return this->name;
}

void ClapTrap::setHitpoints(unsigned int value)
{
    this->hitpoints = value;
}

unsigned int ClapTrap::getHitpoints(void) const
{
    return this->hitpoints;
}

void ClapTrap::setEnergyPoints(unsigned int value)
{
    this->energy_points = value;
}

unsigned int ClapTrap::getEnergyPoints(void) const
{
    return this->energy_points;
}

void ClapTrap::setAttackDamage(unsigned int value)
{
    this->attack_damage = value;
}

unsigned int ClapTrap::getAttackDamage(void) const
{
    return this->attack_damage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &value)
{
    if (this == &value)
		return *this;
	this->name = value.getName(); 
	this->hitpoints = value.getHitpoints();
	this->energy_points = value.getEnergyPoints();
	this->attack_damage = value.getAttackDamage();
	return *this;
}

void ClapTrap::attack(std::string const& target)
{
    std::cout << "ClapTrap " << this->name << " attack " << target << " causing " << getAttackDamage() << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name << " take damage " << amount << " points of damage!" << std::endl;
    if (hitpoints > 0)
        this->hitpoints -= amount;
    
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name << " be repaired " <<  amount << " points!" << std::endl;
    std::cout << "ClapTrap " << this->name << " get " <<  getEnergyPoints() << " energy points!" << std::endl;
}