/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:19:21 by maragorn          #+#    #+#             */
/*   Updated: 2021/09/28 16:19:24 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

# include <iostream>
# include <iomanip>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
public:
    void            setFirstName(std::string& value);
    std::string     getFirstName(void);
    void            setLastName(std::string& value);
    std::string     getLastName(void);
    void            setNickname(std::string& value);
    std::string     getNickname(void);
    void            setPhoneNumber(std::string& value);
    std::string     getPhoneNumber(void);
    void            setDarkestSecret(std::string& value);
    std::string     getDarkestSecret(void);
    
};

#endif