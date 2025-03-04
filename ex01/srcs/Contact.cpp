/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 10:15:42 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/04 16:16:10 by aubertra         ###   ########.fr       */
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

int         Contact::set_index(int ind)
{
    this->_index = ind;
    return (0);
}

int         Contact::set_first_name(void)
{
    std::string buf;
    
    std::cout << "First name: ";
    std::getline(std::cin, buf);
    if (buf.empty())
    {
        std::cout << "First name cannot be empty."
            "Contact was not created" << std::endl;
        return (-1);
    }
    this->_first_name = buf;
    return (0);
}

int         Contact::set_last_name(void)
{
    std::string buf;

    std::cout << "Last name: ";
    std::getline(std::cin, buf);
    if (buf.empty())
    {
        std::cout << "Last name cannot be empty."
            "Contact was not created" << std::endl;
        return (-1);
    }
    this->_last_name = buf;
    return (0);
}

int         Contact::set_nickname(void)
{
    std::string buf;

    std::cout << "Nickname: ";
    std::getline(std::cin, buf);
    if (buf.empty())
    {
        std::cout << "Nickname cannot be empty."
            "Contact was not created" << std::endl;
        return (-1);
    }
    this->_nickname = buf;
    return (0);
}

int         Contact::set_phonenumber(void)
{
    std::string buf;

    std::cout << "Phone number: ";
    std::getline(std::cin, buf);
    if (buf.empty())
    {
        std::cout << "Phone number cannot be empty."
            "Contact was not created" << std::endl;
        return (-1);
    }
    this->_phonenumber = buf;
    return (0);
}

int         Contact::set_secret(void)
{
    std::string buf;

    std::cout << "Darkest secret: ";
    std::getline(std::cin, buf);
    if (buf.empty())
    {
        std::cout << "Darkest secret cannot be empty."
            "Contact was not created" << std::endl;
        return (-1);
    }
    this->_secret = buf;
    return (0);
}
