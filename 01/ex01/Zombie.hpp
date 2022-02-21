/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:37:36 by maragorn          #+#    #+#             */
/*   Updated: 2021/09/29 13:47:14 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

# include <iostream>

class Zombie
{
private:
    std::string _name;
public:
	Zombie(std::string name);
    Zombie();
	~Zombie();
    void            announce();
    void            setName(std::string& value);
    std::string     getName(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif