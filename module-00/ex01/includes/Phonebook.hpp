#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iomanip>
#include <iostream>

#include "Contacts.hpp"


class Phonebook{
    private:
        Contact *_contacts[8];
        int     _index;
        int     _count;

    public:
        Phonebook(); 
        int getCount();
        void setCount();
        int addContact();
        Contact *getContact();
        void    freeClass();
        void    search();    
        void    putLines(int index, Contact *contact);
        std::string truncate(std::string str);  
};
#endif