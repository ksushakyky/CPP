/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:17:23 by maragorn          #+#    #+#             */
/*   Updated: 2021/09/29 15:17:24 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string string;
    std::string* stringPTR = &string;
    std::string& stringREF = string;

    string = "HI THIS IS BRAIN";
    std::cout << "Address in memory of the string" << std::endl;
    std::cout << "string    : " << &string << std::endl;
    std::cout << "stringPTR : " << stringPTR << std::endl;
    std::cout << "stringREF : " << &stringREF << std::endl;
    std::cout << "String using the pointer and reference" << std::endl;
    std::cout << "stringPTR : " << *stringPTR << std::endl;
    std::cout << "stringREF : " << stringREF << std::endl;
}