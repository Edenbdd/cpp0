/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:57:32 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/04 11:40:25 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
    public:
        Contact(int const i, std::string fname,
            std::string lname, std::string nname,
            std::string pnb, std::string secret);
        ~Contact(void);
        int const         get_index(void);
        std::string const get_first_name(void);
        std::string const get_last_name(void);
        std::string const get_nickname(void);
        std::string const get_phonenumber(void);
        std::string const get_secret(void);
    private:
        int const _index;
        std::string  _first_name;
        std::string const _last_name;
        std::string const _nickname;
        std::string const _phonenumber;
        std::string const _secret;
};

#endif