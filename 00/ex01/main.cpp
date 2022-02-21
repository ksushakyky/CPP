/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:19:28 by maragorn          #+#    #+#             */
/*   Updated: 2021/09/28 16:19:30 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook pbook;
    std::string input;
       
    std::cout << "\033[1;36m---------------------------------------------\033[0m";
    std::cout << std::endl << "\033[1;37m            Welcome to Phone Book\033[0m" << std::endl;
    std::cout << "\033[1;36m---------------------------------------------\033[0m" << std::endl;
    while (true)
	{
		std::cout << std::endl << "\033[1;37mEnter one of the commands(ADD, SEARCH, EXIT) : \033[0m" << std::endl;
        std::getline(std::cin, input);
        if (std::cin.eof())
            exit(0);
        if (input == "EXIT")
        {
            std::cout << "\033[1;36m---------------------------------------------\033[0m";
            std::cout << std::endl << "\033[1;37m            Good bye, see you soon!\033[0m" << std::endl;
            std::cout << "\033[1;36m---------------------------------------------\033[0m" << std::endl;
            exit(0);
        }
        else if (input == "ADD")
        {
            std::cout << "\033[1;36m---------------------------------------------\033[0m" ;
            std::cout << std::endl << "\033[1;37m          Please fill in the fields\033[0m"<< std::endl;
            std::cout << "\033[1;36m---------------------------------------------\033[0m" << std::endl;
            pbook.ft_add();
        }
        else if (input == "SEARCH")
        {
            std::cout << "\033[1;36m---------------------------------------------\033[0m" ;
            std::cout << std::endl << "\033[1;37m             Available contacts :\033[0m"<< std::endl;
            std::cout << "\033[1;36m---------------------------------------------\033[0m" << std::endl;
            pbook.ft_search();
        }
        else
        {
            if (input != " ")
                std::cout << std::endl << "\033[1;31mWrong command\033[0m" << std::endl;
        }
    }
    return(0);
}

