/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 10:15:42 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/04 13:46:03 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void): _index(-1)
{
    std::cout << "Contact constructor called" << std::endl; 
    return;
}

Contact::~Contact(void)
{
    std::cout << "Contact destructor called" << std::endl; 
    return;
}

int    Contact::get_index(void)
{
    return this->_index;
}

std::string    Contact::get_first_name(void)
{
    return this->_first_name;
}

std::string    Contact::get_last_name(void)
{
    return this->_last_name;
}

std::string    Contact::get_nickname(void)
{
    return this->_nickname;
}

std::string    Contact::get_phonenumber(void)
{
    return this->_phonenumber;
}

std::string    Contact::get_secret(void)
{
    return this->_secret;
}
