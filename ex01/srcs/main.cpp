/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:45:56 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/04 11:11:58 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// #include <iomanip>
#include <string>
#include "PhoneBook.hpp"

int    add(PhoneBook book)
{
    int i;
    Contact current;

    i = 0;
    current = getpbook(book.pbook[i]);
    while (i < 8 && get_firstname(current._first_name))
    {
        current = getpbook(book.pbook[i]);
        i++;
    }    
    std::cout << "Please enter new contact informations" << std::endl;
    std::cout << "First name: ";
    std::cin >> current->_firstname;
    std::cout << "Last name: ";
    std::cout << "Nickname: ";
    std::cout << "Darkest secret: ";
    return (0);
}

int main(void)
{
    std::string cmd_line;
    PhoneBook   book;

    while (1)
    {
        std::cout << "Please enter a command: ";
        std::cin >> cmd_line;
        if (cmd_line.compare("EXIT") == 0)
            break;
        else if (cmd_line.compare("ADD") == 0)
            add(&book);
        else if (cmd_line.compare("SEARCH") == 0)
            break;
        else
            std::cout << "Possible commands are ADD, SEARCH or EXIT" << std::endl;
    }
    return (0);
}
