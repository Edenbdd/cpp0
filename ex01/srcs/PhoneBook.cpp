/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 10:15:38 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/04 16:20:12 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    std::cout << "PhoneBook constructor called" << std::endl;
    return;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "PhoneBook destructor called" << std::endl;
    return;
}

Contact *PhoneBook::get_pbook(void)
{
    return this->pbook;
}

int PhoneBook::add()
{
    int         i;
    Contact     new_contact;

    std::cout << "Please enter new contact informations" << std::endl;
    if (new_contact.set_first_name() == -1 
        || new_contact.set_last_name() == -1
        || new_contact.set_nickname() == -1
        || new_contact.set_phonenumber() == -1
        || new_contact.set_secret() == -1)
        return (-1);
    i = 0;
    while (i < 8 && this->get_pbook()[i].get_index() != -1)
        i++;
    if (i == 8)
    {
        std::cout << "Warning, this phone book can holds only 8 contacts."
            "The new contact will erase the oldest contact." << std::endl;
        i = 0;
    }
    new_contact.set_index(i);
    this->get_pbook()[i] = new_contact;
    std::cout << "New contact sucessfully created !" << std::endl;
    return (0);
}

int PhoneBook::search()
{
    std::cout << "PhoneBook search called" << std::endl;
    return (0);
}