#include "./includes/Phonebook.hpp"
#include "./includes/Utils.hpp"
#include "./includes/Contacts.hpp"

int main(int argc, char **argv){
    (void)argv;
    if(argc>1) return 0;
    std::string input;
    Phonebook *book = new Phonebook();
    howToUse();
    handleOptions(input, book);
}