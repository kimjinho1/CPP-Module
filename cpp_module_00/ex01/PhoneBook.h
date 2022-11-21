#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include <sstream>
#include "Contact.h"

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