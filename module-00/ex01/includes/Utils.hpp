#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <iomanip>
#include <iostream>

#include "Phonebook.hpp"
#include "Contacts.hpp"


void    putHeader();
void    putFooter();
void    putLines(int index, Contact contact);
        std::string truncate(std::string str);  

bool    checkInput(std::string input);
bool    isEmpty(std::string string);
void    howToUse();
void    handleOptions(std::string input, Phonebook phone);
void printContact(Contact *contact);


#endif