#include "../includes/Phonebook.hpp"
#include "../includes/Utils.hpp"
#include "../includes/Contacts.hpp"

Phonebook::Phonebook() {
    this->_index = 0;
}

int Phonebook::getCount() {
    return(this->_index);
}

void Phonebook::setCount() {
    this->_index++;
}

Contact Phonebook::error(){
    Contact error;
    std::cout << "You must type something to add.";
    error.setFirstName("");
    std::cin.clear();
    return (error);
}

Contact Phonebook::getContact(){
    Contact newContact;
    std::string FirstName;
    std::string LastName;
    std::string Nickname;
    std::string PhoneNumber;
    std::string DarkestSecret;

    newContact = Contact();

    std::cout << "First Name: ";
    std::getline(std::cin, FirstName);
    if(isEmpty(FirstName)) 
        return (this->error());
    std::cout << "Last Name: ";
    std::getline(std::cin, LastName);
    if(isEmpty(LastName)) 
        return (this->error());
    std::cout << "Nickname: ";
    std::getline(std::cin, Nickname);
    if(isEmpty(Nickname)) 
        return (this->error());
    std::cout << "Phone Number: ";
    std::getline(std::cin, PhoneNumber);
    if(isEmpty(PhoneNumber)) 
        return (this->error());
    std::cout << "Darkest Secret: ";
    std::getline(std::cin, DarkestSecret);
    if(isEmpty(DarkestSecret)) 
        return (this->error());

    newContact.setFirstName(FirstName);
    newContact.setLastName(LastName);
    newContact.setNickName(Nickname);
    newContact.setPhoneNumber(PhoneNumber);
    newContact.setDarkestSecret(DarkestSecret);
    return(newContact);
}

int Phonebook::addContact(){
    Contact newContact;
    int index;

    newContact = this->getContact();
    if(newContact.getFirstName().empty())
        return 0;
    index = this->getCount() % 8;
    this->setCount();
    this->_contacts[index] = newContact;
    return 1;
}



void Phonebook::search(){
    int index=0;
    int count;

    if(this->_index > 8)
        count=8;
    else
        count = this->_index;
    putHeader();
    for(int i=0; i < count; i++)
        putLines(i, this->_contacts[i]);
    putFooter();
    std::cout << "Type down the number of the index that you'd like to search:\n";
    std::cin >> index;
    if(std::cin.good() && index >= 0 && index < count)
        printContact(&this->_contacts[index]);
    else
    {
        std::cin.clear();
        std::cout << "This ID does not exists.\n";
    }
    std::cin.ignore(10000, '\n');
}
