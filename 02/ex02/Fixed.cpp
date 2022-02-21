/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:51:13 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/01 17:44:13 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::bit = 8;

Fixed::Fixed(): value(0)
{
}

Fixed::Fixed(const Fixed &fix)
{
    *this = fix;
}

Fixed::Fixed(const int _value): value(_value << this->bit)
{
}

Fixed::Fixed(const float _value): value(roundf(_value * (1 << this->bit)))
{
}

Fixed::~Fixed()
{
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

int Fixed::getRawBits(void) const
{
	return this->value;
}

Fixed& Fixed::operator=(const Fixed &fix) 
{
	this->value = fix.getRawBits();
	return *this;
}

float Fixed::toFloat(void) const
{
    return ((float)this->value / (float)(1 << this->bit));
}

int Fixed::toInt(void) const
{
    return (this->value >> this->bit);
}

std::ostream& operator<<(std::ostream &out, const Fixed &fix)
{
	out << fix.toFloat();
	return out;
}

bool Fixed::operator==(const Fixed &fix)
{
    return this->getRawBits() == fix.getRawBits();
}

bool Fixed::operator!=(const Fixed &fix)
{
    return this->getRawBits() != fix.getRawBits();
}

bool Fixed::operator>(const Fixed &fix)
{
    return this->getRawBits() > fix.getRawBits();
}

bool Fixed::operator<(const Fixed &fix)
{
    return this->getRawBits() < fix.getRawBits();
}

bool Fixed::operator>=(const Fixed &fix)
{
    return this->getRawBits() >= fix.getRawBits();
}

bool Fixed::operator<=(const Fixed &fix)
{
    return this->getRawBits() <= fix.getRawBits();
}

Fixed Fixed::operator+(const Fixed &fix)
{
    return Fixed(this->getRawBits() + fix.getRawBits());
}

Fixed Fixed::operator-(const Fixed &fix)
{
    return Fixed(this->getRawBits() - fix.getRawBits());
}

Fixed Fixed::operator*(const Fixed &fix)
{
    return Fixed(this->toFloat() * fix.toFloat());
}

Fixed Fixed::operator/(const Fixed &fix)
{
    return Fixed(this->toFloat() / fix.toFloat());
}

Fixed& Fixed::operator++(void) 
{
	++this->value;
	return *this;
}

Fixed& Fixed::operator--(void)
{
    --this->value;
	return *this;
}

Fixed Fixed::operator++(int) 
{
    Fixed oldValue(*this);

    this->value++;
    return oldValue;
}

Fixed Fixed::operator--(int)
{
    Fixed oldValue(*this);

    this->value--;
    return oldValue;
}

Fixed& Fixed::min(Fixed &fix1, Fixed &fix2)
{
    if (fix1.getRawBits() > fix2.getRawBits())
        return fix2;
    else
        return fix1;
}

const Fixed& Fixed::min(const Fixed &fix1, const Fixed &fix2)
{
    if (fix1.getRawBits() > fix2.getRawBits())
        return fix2;
    else
        return fix1;
}

Fixed& Fixed::max(Fixed &fix1, Fixed &fix2)
{
    if (fix1.getRawBits() > fix2.getRawBits())
        return fix1;
    else
        return fix2;
}

const Fixed& Fixed::max(const Fixed &fix1, const Fixed &fix2)
{
    if (fix1.getRawBits() > fix2.getRawBits())
        return fix1;
    else
        return fix2;
}