/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:31:01 by maragorn          #+#    #+#             */
/*   Updated: 2021/09/30 17:31:02 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
}

Karen::~Karen()
{
}

void Karen::debug(void)
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
    std::cout << "I just love it!" << std::endl;
}

void Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
    std::cout << "If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}


void Karen::complain(std::string level)
{
    int key = 0;

    ptr_func func[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    key = level.compare("DEBUG") == 0 ? 1 : key;
    key = level.compare("INFO") == 0 ? 2 : key;
    key = level.compare("WARNING") == 0 ? 3 : key;
    key = level.compare("ERROR") == 0 ? 4 : key;
    switch(key)
    {
    case 1 ... 4:
        (this->*(func[key -1]))();
        break ;
    default:
        std::cout << "Karen can only complain about 4 things";
        break ;
    }
}