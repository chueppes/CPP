#include "../includes/Utils.hpp"
#include "../includes/Phonebook.hpp"
#include "../includes/Contacts.hpp"

std::string truncate(std::string str){
    return str.length() > 10 ? str.substr(0, 9) + "." : str;
}

bool isEmpty(std::string str){
    if(str.empty()){
        std::cout << "You have to type something to add.\n";
        return true;
    }
    return false;
}

void putHeader(){
    std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
    std::cout << "|" << std::setw(10) << std::left << "index";
    std::cout << "|" << std::setw(10) << std::left << "First Name";
    std::cout << "|" << std::setw(10) << std::left << "Last Name";
    std::cout << "|" << std::setw(10) << std::left << "Nickname";
    std::cout << "|" << std::endl;
    std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
}

void putFooter(){
    std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl;
}

void putLines(int index, Contact contact){
    std::cout << "|" << std::setw(10) << index;
    std::cout << "|" << std::setw(10) << truncate(contact.getFirstName());
    std::cout << "|" << std::setw(10) << truncate(contact.getLastName());
    std::cout << "|" << std::setw(10) << truncate(contact.getNickName());
    std::cout << "|" << std::endl;
}

void howToUse(){
      std::cout << "How to use::" << std::endl;
  std::cout << "- ADD: add a contact to phonebook" << std::endl;
  std::cout << "- SEARCH: search for a contact in the phonebook" << std::endl;
  std::cout << "- EXIT: quit the program" << std::endl;
}

bool checkInput(std::string input){
    if(input.empty()) return true;
    return input == "ADD" || input == "SEARCH" || input =="EXIT";
}

void handleOptions(std::string input, Phonebook *phone){

    while(true){
        std::cout << "-> ";
        std::getline(std::cin, input);
        if(checkInput(input)==true)
        std::cout << "Invalid option.";
    
        if(input == "ADD"){
            if (phone->addContact())
                ;
            else
                std::cout << "It was not possible to add the contact.\n";
        }
        else if (input == "SEARCH")
            phone->search();
        else if (input == "EXIT"){
            phone->freeClass();
            break;
        }
    }
    delete phone;
    std::cout << "Phonebook closed.";
}