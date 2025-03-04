/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:57:32 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/04 10:20:39 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
    public:
        Contact(void);
        ~Contact(void);
    private:
        std::string const _first_name;
        std::string const _last_name;
        std::string const _nickname;
        std::string const _phonenumber;
        std::string const _secret;
};

#endif