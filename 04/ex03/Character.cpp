/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 19:18:15 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/08 13:15:27 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
    std::cout << "Default constructor from the Character class called" << std::endl;
}

Character::Character(std::string _name): name(_name)
{
    std::cout << "Default constructor with args from the Character class called" << std::endl;
    for (int i = 0; i < 4; i++)
		inventory[i] = 0; 
}

Character::Character(const Character &value)
{
    std::cout << "Copy constructor from the Character class called" << std::endl;
	name = value.name;
	for (int i = 0; i < 4; i++)
		inventory[i] = value.inventory[i]->clone();
}

Character::~Character()
{
    std::cout << "Destructor from the Character class called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] != NULL)
			delete inventory[i];
    }
}

Character& Character::operator=(const Character &value)
{
    if (this != &value)
    {
        this->name = value.getName();
        for (int i = 0; i < 4; i++)
		{
			inventory[i] = value.inventory[i]->clone();
		}
    }
        
    return *this;
}

std::string const & Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if(this->inventory[i] == NULL)
        {
            this->inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if(inventory[idx])
        inventory[idx]->use(target);
}
