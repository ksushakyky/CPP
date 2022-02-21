/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:17:51 by maragorn          #+#    #+#             */
/*   Updated: 2021/09/29 15:17:52 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
    Weapon* _weapon;
    std::string _name;
public:
    HumanB(std::string name);
    ~HumanB();
    void	setWeapon(Weapon &weapon);
    void    attack (void);
};



#endif