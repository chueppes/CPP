#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contacts.hpp"

class Phonebook{
    private:
        Contact *contacts[8];
        int     index;
        int     count;

    public:
        Phonebook();

        int getCount();
        Contact getContact(int index);
        void addContact(Contact contact);
        
};
#endif