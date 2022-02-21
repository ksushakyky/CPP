/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:59:06 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/22 17:39:56 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span()
{}

Span::Span(unsigned int n): N(n)
{}

Span::Span(const Span &value)
{
    *this = value;
}

Span& Span::operator=(const Span &value)
{
    if (this != &value)
    {
        this->N = value.N;
        for (unsigned int i = 0; i < N; i++) {
			vect[i] = value.vect[i];
		}
    }
    return *this;
}

Span::~Span()
{}

void Span::addNumber(int n)
{
    if (vect.size() >= N)
        throw CannotAddException();
    vect.push_back(n);
}

void Span::addNumberTest(unsigned int size)
{
    if (size > N)
        throw CannotAddException();
    for (unsigned int i = 1; i <= size; i++)
        vect.push_back(i);
}

int Span::shortestSpan()
{
    
    if (vect.size() == 0 || vect.size() == 1)
        throw CannotSpanException();
    std::sort(vect.begin(), vect.end());
    std::vector<int>::iterator i = vect.begin();
    std::vector<int>::iterator j = vect.begin() + 1;
    int min = *i;
    int max = *j;
    return max - min;
}

int Span::longestSpan()
{
    if (vect.size() == 0 || vect.size() == 1)
        throw CannotSpanException();
    std::sort(vect.begin(), vect.end());
    std::vector<int>::iterator i = vect.begin();
    std::vector<int>::iterator j = vect.end() - 1;
    int min = *i;
    int max = *j;
    return max - min;
}
