/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:37:15 by maragorn          #+#    #+#             */
/*   Updated: 2021/09/29 13:43:44 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
    Zombie *zomb;
    int     N;

    if (argc == 2)
    {
        N = std::stoi(argv[1]);
        zomb = zombieHorde(N, "Billy");
        for (int i = 0; i < N; i++)
            zomb[i].announce();
        delete [] zomb;
    }
    else
        std::cout << "bad arguments" << std::endl;
    return (0);
}