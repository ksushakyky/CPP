/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:19:15 by maragorn          #+#    #+#             */
/*   Updated: 2021/09/28 16:19:17 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(std::string& value)
{
    this->first_name = value;
}

std::string Contact::getFirstName(void)
{
    return (this->first_name);
}

void Contact::setLastName(std::string& value)
{
    this->last_name = value;
}

std::string Contact::getLastName(void)
{
    return (this->last_name);
}

void Contact::setNickname(std::string& value)
{
    this->nickname = value;
}

std::string Contact::getNickname(void)
{
    return (this->nickname);
}

void Contact::setPhoneNumber(std::string& value)
{
    this->phone_number = value;
}

std::string Contact::getPhoneNumber(void)
{
    return (this->phone_number);
}

void Contact::setDarkestSecret(std::string& value)
{
    this->darkest_secret = value;
}

std::string Contact::getDarkestSecret(void)
{
    return (this->darkest_secret);
}