/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:10:11 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/22 14:00:37 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    {
        std::cout << "-----vector-----" << std::endl;
        std::vector<int> vect;
        for (int i = 0; i < 5; ++i)
            vect.push_back(i);
        easyfind(vect, 2);
        easyfind(vect, 10);
    }
    
    {
        std::cout << "-----list-----" << std::endl;
        std::list<int> lst;
        for (int i = 0; i < 5; ++i)
            lst.push_back(i);
        easyfind(lst, 3);
        easyfind(lst, 15);
    }
    
    {
        std::cout << "-----deque-----" << std::endl;
        std::deque<int> deq;
        for (int i = 0; i < 5; ++i)
            deq.push_back(i);
        easyfind(deq, 4);
        easyfind(deq, 20);
    } 
}