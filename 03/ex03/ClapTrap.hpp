/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:55:09 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/05 11:55:10 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
#define CLAP_TRAP_H

#include <iostream>

class ClapTrap
{
protected:
    std::string     name;
    unsigned int    hitpoints;
    unsigned int    energy_points;
    unsigned int    attack_damage;
public:
    ClapTrap();
    ClapTrap(std::string _name);
    ClapTrap(const ClapTrap &value);
    ~ClapTrap();
    ClapTrap& operator=(const ClapTrap &value);
    void setName(std::string value);
    std::string getName(void) const;
    void setHitpoints(unsigned int value);
    unsigned int getHitpoints(void) const;
    void setEnergyPoints(unsigned int value);
    unsigned int getEnergyPoints(void) const;
    void setAttackDamage(unsigned int value);
    unsigned int getAttackDamage(void) const;
    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};




#endif