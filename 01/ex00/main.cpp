/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:03:02 by maragorn          #+#    #+#             */
/*   Updated: 2021/09/29 13:03:04 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *zomb;
    
    zomb = newZombie("Zikk");
    zomb->announce();
    delete zomb;
    randomChump("Jack");
    return (0);
}