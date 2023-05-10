#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <iomanip>
#include <iostream>

#include "Phonebook.hpp"
#include "Contacts.hpp"


void    putHeader();
void    putFooter();

bool    checkInput(std::string input);
bool    isEmpty(std::string string);
void    howToUse();
void    handleOptions(std::string input, Phonebook *phone);


#endif