/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:03:39 by maragorn          #+#    #+#             */
/*   Updated: 2021/09/30 13:36:03 by maragorn         ###   ########.fr       */
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
	~Zombie(void);
    void    announce(void);

};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif