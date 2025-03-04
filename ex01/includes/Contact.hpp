/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:57:32 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/04 13:53:27 by aubertra         ###   ########.fr       */
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
        int         get_index(void);
        std::string get_first_name(void);
        std::string get_last_name(void);
        std::string get_nickname(void);
        std::string get_phonenumber(void);
        std::string get_secret(void);
        int         set_index(int ind);
        int         set_first_name(std::string fname);
        int         set_last_name(std::string lname);
        int         set_nickname(std::string nname);
        int         set_phonenumber(std::string pnb);
        int         set_secret(std::string secret);
    private:
        int _index;
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phonenumber;
        std::string _secret;
};

#endif