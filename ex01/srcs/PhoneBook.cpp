/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 10:15:38 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/04 11:46:34 by aubertra         ###   ########.fr       */
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
