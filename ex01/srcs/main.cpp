/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:45:56 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/04 17:10:40 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// #include <iomanip>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"


int main(void)
{
    std::string cmd_line;
    PhoneBook   book;

    std::cout << "Possible commands are ADD, SEARCH or EXIT" << std::endl;
    while (1)
    {
        std::cout << "> ";
        getline(std::cin, cmd_line);
        if (cmd_line.compare("EXIT") == 0)
            break;
        else if (cmd_line.compare("ADD") == 0)
            book.add();
        else if (cmd_line.compare("SEARCH") == 0)
            book.search();
        else
            std::cout << "Possible commands are ADD, SEARCH or EXIT" << std::endl;
        book.debug();
    }
    return (0);
}
