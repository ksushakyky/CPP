/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:19:49 by maragorn          #+#    #+#             */
/*   Updated: 2021/09/28 16:19:51 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
private:
    Contact     contact[8];
    int         index;
    int         index_contact;
public:
    PhoneBook();
    ~PhoneBook();
    void            ft_add();
    void            ft_search();
    std::string     ft_cut();
};

#endif