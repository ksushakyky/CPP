/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:55:27 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/05 14:37:11 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    ClapTrap jack("Jack");
    ScavTrap bill("Bill");
    FragTrap sara("Sara");
    DiamondTrap karen("Karen");

    std::cout << std::endl;
    jack.attack("Joe");
    std::cout << std::endl;
    bill.takeDamage(0);
    std::cout << std::endl;
    bill.beRepaired(0);
    std::cout << std::endl;
    bill.guardGate(); 
    std::cout << std::endl;
    bill.attack("Jack");
    jack.takeDamage(5);
    sara.highFivesGuys();
    karen.whoAmI();

}