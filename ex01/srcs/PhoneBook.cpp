/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 10:15:38 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/04 14:03:39 by aubertra         ###   ########.fr       */
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
    Contact     current;
    std::string buf;

    i = 0;
    current = this->get_pbook()[i];
    while (i < 8 && current.get_index() != -1)
    {
        current = this->get_pbook()[i];
        i++;
    }
    if (i == 8)
    {
        std::cout << "Warning, this phone book can holds only 8 contacts."
            "New contact will erase the oldest contact" << std::endl;
        i = 0;
    }
    current.set_index(i);
    std::cout << "Please enter new contact informations" << std::endl;
    std::cout << "First name: ";
    std::cin >> buf;
    current.set_first_name(buf);
    std::cout << std::endl;
    std::cout << "Last name: ";
    std::cin >> buf;
    std::cout << std::endl;
    current.set_last_name(buf);
    std::cout << "Nickname: ";
    std::cin >> buf;
    std::cout << std::endl;
    current.set_nickname(buf);
    std::cout << "Darkest secret: ";
    std::cin >> buf;
    current.set_secret(buf);
    std::cout << std::endl;
    return (0);
}

int PhoneBook::search()
{
    std::cout << "PhoneBook search called" << std::endl;
    return (0);
}