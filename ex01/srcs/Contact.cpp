/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 10:15:42 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/04 11:40:32 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(int const i, std::string fname,
                    std::string lname, std::string nname,
                    std::string pnb, std::string secret):
                    _index(i),  _first_name(fname),
                    _last_name(lname), _nickname(nname),
                    _phonenumber(pnb), _secret(secret)
{
    std::cout << "Contact constructor called" << std::endl; 
    return;
}

Contact::~Contact(void)
{
    std::cout << "Contact destructor called" << std::endl; 
    return;
}

int const    Contact::get_index(void)
{
    return this->_index;
}

std::string const    Contact::get_first_name(void)
{
    return this->_first_name;
}

std::string const    Contact::get_last_name(void)
{
    return this->_last_name;
}

std::string const    Contact::get_nickname(void)
{
    return this->_nickname;
}

std::string const    Contact::get_phonenumber(void)
{
    return this->_phonenumber;
}

std::string const    Contact::get_secret(void)
{
    return this->_secret;
}
