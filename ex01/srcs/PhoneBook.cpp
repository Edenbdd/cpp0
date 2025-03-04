/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 10:15:38 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/04 13:44:27 by aubertra         ###   ########.fr       */
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
    std::cout << "PhoneBook add called" << std::endl;
    int     i;
    Contact *current;

    i = 0;
    current = this->get_pbook();
    while (i < 8 && current[i].get_index() != -1)
        i++;
    std::cout << "Please enter new contact informations" << std::endl;
    std::cout << "First name: ";
    std::cout << "Last name: ";
    std::cout << "Nickname: ";
    std::cout << "Darkest secret: ";
    return (0);
}

int PhoneBook::search()
{
    std::cout << "PhoneBook search called" << std::endl;
    return (0);
}