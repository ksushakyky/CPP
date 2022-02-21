/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:19:43 by maragorn          #+#    #+#             */
/*   Updated: 2021/09/28 16:19:45 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    index_contact = 0;
    index = 0;
}
PhoneBook::~PhoneBook()    
{
}

std::string PhoneBook::ft_cut()
{
    std::string input;
    std::string str;
    int count = 0;
    
    std::getline(std::cin, input);
    for (unsigned long i = 0; i < input.length(); i++)
    { 
        count++;
        if (count > 10)
        {
            str = input.substr(0, 10).replace(9, 1, ".");
            return(str);
        }
    }
    if (input == "")
        this->index_contact += 1;
    return(input);
}

void PhoneBook::ft_add()
{
    Contact *data;
    std::string input;
    
    this->index_contact = 0;
    if (this->index == 8)
    {
        std::cout << std::endl << "\033[1;31mPhonebook is full, the oldest contact will be overwritten\033[0m" << std::endl;
        data = &this->contact[0];
    }
    else
        data = &this->contact[this->index];
    std::cout << "\033[1;36mFirst name: \033[0m";
    input = ft_cut();
    if (input != "")
        (*data).setFirstName(input);
    std::cout  << "\033[1;36mLast name: \033[0m";
    input = ft_cut();
    if (input != "")
        (*data).setLastName(input);
    std::cout << "\033[1;36mNickname: \033[0m";
    input = ft_cut();
    if (input != "")
        (*data).setNickname(input);
    std::cout << "\033[1;36mPhone number: \033[0m";
    input = ft_cut();
    if (input != "")
        (*data).setPhoneNumber(input);
    std::cout << "\033[1;31mDarkest secret: \033[0m";
    input = ft_cut();
    if (input != "")
        (*data).setDarkestSecret(input);
    this->index++;
    if (this->index_contact == 5 || this->index > 8)
        this->index--;
    std::cout << "\033[1;36m---------------------------------------------\033[0m" << std::endl;
    std::cout << "\033[1;37m          Contact details complete\033[0m" << std::endl;
    std::cout << "\033[1;36m---------------------------------------------\033[0m" << std::endl;
}

void PhoneBook::ft_search()
{
    int i = 0;
    int j = 1;
    std::string input;
    
    std::cout << "\033[1;36m|   index  |  fs name | ls name  |  nk name |\033[0m" << std::endl;
	while (i < this->index)
	{
        std::cout << "|" << std::right << std::setw(10) << j << "|";
        if (this->contact[i].getFirstName() != "")
            std::cout << std::right << std::setw(10) << this->contact[i].getFirstName() << "|";
        else
            std::cout << std::right << std::setw(11) << "|";
        if (this->contact[i].getLastName() != "")
            std::cout << std::right << std::setw(10) << this->contact[i].getLastName() << "|";
        else
            std::cout << std::right << std::setw(11) << "|";
        if (this->contact[i].getNickname() != "")
            std::cout << std::right << std::setw(10) << this->contact[i].getNickname() << "|";
        else
            std::cout << std::right << std::setw(11) << "|";
        std::cout << std::endl;
        i++;
        j++;
    }
    i = 8;
    std::cout << "\033[1;36m---------------------------------------------\033[0m" << std::endl;
    std::cout << "\033[1;37m            Enter contact index : \033[0m" << std::endl;
    std::cout << "\033[1;36m---------------------------------------------\033[0m" << std::endl;
    std::getline(std::cin, input);
    if (input >= "1" && input <= "8")
    {
        i = std::stoi(input);
        if (i > this->index)
        {
            std::cout << std::endl << "\033[1;31m      Index not found\033[0m" << std::endl;
            return ;
        }
            
        i -= 1;
    }
    else
    {
        std::cout << std::endl << "\033[1;31m           Index not found\033[0m" << std::endl;
        return ;
    }
    if (i <= this->index)
    {
        std::cout << "\033[1;36m---------------------------------------------\033[0m" << std::endl;
        std::cout << "\033[1;37m              Contact details : \033[0m" << std::endl;
        std::cout << "\033[1;36m---------------------------------------------\033[0m" << std::endl;
        std::cout  << std::endl << "\033[1;36mFirst name > \033[0m" << this->contact[i].getFirstName() << std::endl;
        std::cout  << "\033[1;36mLast name > \033[0m" << this->contact[i].getLastName() << std::endl;
        std::cout  << "\033[1;36mNickname > \033[0m" << this->contact[i].getNickname() << std::endl;
        std::cout  << "\033[1;36mPhone number > \033[0m" << this->contact[i].getPhoneNumber() << std::endl;
        std::cout  << "\033[1;31mDarkest secret > \033[0m" << this->contact[i].getDarkestSecret() << std::endl;
    }
}