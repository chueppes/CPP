#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <iomanip>
#include <iostream>

#include "Phonebook.hpp"


void    putHeader();
void    putFooter();
void    putLines(int index, Contact *contact);

bool    checkInput(std::string input);
bool    isEmpty(std::string string);
void    howToUse();
void    handleOptions(std::string input, Phonebook *phone);

std::string truncate(std::string str);
#endif