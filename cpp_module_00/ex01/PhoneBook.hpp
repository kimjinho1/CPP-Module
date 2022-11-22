#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <sstream>
#include "Contact.hpp"

class PhoneBook
{
private:
    int     idx;
    Contact contacts[8];
public:
    PhoneBook();
    void    ADD(void);
    void    SEARCH(void);
    void    EXIT(void);
};

#endif