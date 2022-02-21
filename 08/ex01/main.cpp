/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:59:28 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/22 14:13:02 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    try
   {
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception & e) {
        std::cerr << e.what() << '\n';
    }
    std::cout << "---------" << std::endl;
    try
    {
        Span sp = Span(10000);
        sp.addNumberTest(500);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception & e) {
        std::cerr << e.what() << '\n';
    }
    std::cout << "---------" << std::endl;
    try
   {
        Span sp = Span(5);
        sp.addNumberTest(5);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception & e) {
        std::cerr << e.what() << '\n';
    }
    std::cout << "---------" << std::endl;
    try
    {
        Span sp = Span(0);
        sp.addNumber(1);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception & e) {
        std::cerr << e.what() << '\n';
    }
    std::cout << "---------" << std::endl;
    try
    {
        Span sp = Span(1);
        sp.addNumber(1);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception & e) {
        std::cerr << e.what() << '\n';
    }
    return 0;
}