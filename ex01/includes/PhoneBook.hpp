/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:55:12 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/04 17:25:28 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

class PhoneBook
{
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        Contact  *get_pbook(void);
        int add();
        int search();
        int display();
        int debug();
    private: //idk if this could/should be const ?
        Contact pbook[7];
};

#endif