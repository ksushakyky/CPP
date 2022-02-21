/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:37:41 by maragorn          #+#    #+#             */
/*   Updated: 2021/09/29 13:46:43 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie	*zombies;
	std::string num;

	zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		num = name + std::to_string(i);
		zombies[i].setName(num);
	}	
	return (zombies);
}