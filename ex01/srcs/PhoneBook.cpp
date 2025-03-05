/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 10:15:38 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/05 10:47:05 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){}

PhoneBook::~PhoneBook(void){}

Contact *PhoneBook::get_pbook(void)
{
    return this->pbook;
}

int PhoneBook::add(int *oldest)
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
        i = *oldest;
        (*oldest)++;
        if (*oldest > 7)
            *oldest = 0;
    }
    new_contact.set_index(i);
    this->get_pbook()[i] = new_contact;
    std::cout << "New contact sucessfully created !" << std::endl;
    return (0);
}

// int PhoneBook::debug()
// {
//     Contact current;
//     int     i;
    
//     std::cout << "Here is your phone book:" << std::endl;
//     i = 0;
//     while (i < 8 && this->get_pbook()[i].get_index() != -1)
//     {
//         current = this->get_pbook()[i];
//         std::cout << "Index: " << current.get_index() << std::endl;
//         std::cout << "First name: " << current.get_first_name() << std::endl;
//         std::cout << "Last name: " << current.get_last_name() << std::endl;
//         std::cout << "Nickname: " << current.get_nickname() << std::endl;
//         std::cout << "Phone number: " << current.get_phonenumber() << std::endl;
//         std::cout << "Darkest secret: " << current.get_secret() << std::endl;
//         i++;
//     }
//     std::cout << "End of your phone book" << std::endl;
//     return (0);
// }

int PhoneBook::display()
{
    std::string fname;
    std::string lname;
    std::string nname;
    Contact     current;
    int         i;

    i = 0;
    while (i < 8 && this->get_pbook()[i].get_index() != -1)
    {
        current = this->get_pbook()[i];
        fname = current.get_first_name();
        if (fname.length() >= 10)
        {
            fname = fname.substr(0, 9);
            fname.replace(9, 9, ".");
        }
        lname = current.get_last_name();
        if (lname.length() >= 10)
        {
            lname = lname.substr(0, 9);
            lname.replace(9, 9, ".");
        }
        nname = current.get_nickname();
        if (nname.length() >= 10)
        {
            nname = nname.substr(0, 9);
            nname.replace(9, 9, ".");
        }
        std::cout << std::setw(10) << current.get_index();
        std::cout << "|";
        std::cout << std::setw(10) << fname;
        std::cout << "|";
        std::cout << std::setw(10) << lname;
        std::cout << "|";
        std::cout << std::setw(10) << nname;
        std::cout << std::endl;
        i++;
    }
    return (0);
}

int PhoneBook::search()
{
    std::string line;
    Contact     current;
    int         i;

    this->display();
    std::cout << "Please enter the index of the contact you want to display: ";
    std::cin >> i;
    if (i < 0 || i > 7 || this->get_pbook()[i].get_index() == -1)
    {
        std::cout << "Wrong index, please try to search again" << std::endl;
        return (-1);
    }
    current = this->get_pbook()[i];   
    std::cout << "Index: " << current.get_index() << std::endl;
    std::cout << "First name: " << current.get_first_name() << std::endl;
    std::cout << "Last name: " << current.get_last_name() << std::endl;
    std::cout << "Nickname: " << current.get_nickname() << std::endl;
    std::cout << "Phone number: " << current.get_phonenumber() << std::endl;
    std::cout << "Darkest secret: " << current.get_secret() << std::endl;
    return (0);
}
