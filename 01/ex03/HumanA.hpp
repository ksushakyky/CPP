/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:17:41 by maragorn          #+#    #+#             */
/*   Updated: 2021/09/29 15:38:30 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string _name; 
    Weapon& _weapon;
public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();
    void attack(void);
};




#endif