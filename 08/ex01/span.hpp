/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:59:18 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/22 17:39:30 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
private:
    unsigned int N;
    std::vector<int> vect;
public:
    Span();
    Span(unsigned int n);
    Span(const Span &value);
    Span& operator=(const Span &value);
    ~Span();
    void addNumber(int n);
    void addNumberTest(unsigned int size);
    int shortestSpan();
    int longestSpan();
    class CannotAddException: public std::exception{
        const char* what() const throw(){
            return "Cannot add new element.";
        }
    };
    class CannotSpanException: public std::exception{
        const char* what() const throw(){
            return "Cannot find a span.";
        }
    };
};

#endif