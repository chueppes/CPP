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

Contact *Phonebook::getContact(){
    Contact *newContact;
    std::string FirstName;
    std::string LastName;
    std::string Nickname;
    std::string PhoneNumber;
    std::string DarkestSecret;

    newContact = new Contact();

    std::cout << "First Name: ";
    std::getline(std::cin, FirstName);
    if(isEmpty(FirstName)) 
        return (NULL);
    std::cout << "Last Name: ";
    std::getline(std::cin, LastName);
    if(isEmpty(LastName)) 
        return (NULL);
    std::cout << "Nickname: ";
    std::getline(std::cin, Nickname);
    if(isEmpty(Nickname)) 
        return (NULL);
    std::cout << "Phone Number: ";
    std::getline(std::cin, PhoneNumber);
    if(isEmpty(PhoneNumber)) 
        return (NULL);
    std::cout << "Darkest Secret: ";
    std::getline(std::cin, DarkestSecret);
    if(isEmpty(DarkestSecret)) 
        return (NULL);

    newContact->setFirstName(FirstName);
    newContact->setLastName(LastName);
    newContact->setNickName(Nickname);
    newContact->setPhoneNumber(PhoneNumber);
    newContact->setDarkestSecret(DarkestSecret);
    return(newContact);
}

int Phonebook::addContact(){
    Contact *newContact;
    int index;

    newContact = this->getContact();
    if(!newContact || newContact == NULL) {
        delete newContact;
        return 0;
    }
    index = this->getCount() % 8;
    if(this->getCount() > 7){
        delete this->_contacts[index];
    }
    this->setCount();
    this->_contacts[index] = newContact;
    return 1;
}

std::string  Phonebook::truncate(std::string str){
    return str.length() > 10 ? str.substr(0, 9) + "." : str;
}

void Phonebook::putLines(int index, Contact *contact){
    std::cout << "|" << std::setw(10) << index;
    std::cout << "|" << std::setw(10) << this->truncate(contact->getFirstName());
    std::cout << "|" << std::setw(10) << this->truncate(contact->getLastName());
    std::cout << "|" << std::setw(10) << this->truncate(contact->getNickName());
    std::cout << "|" << std::endl;
}

void Phonebook::search(){
    int index=0;
    int count;

    if(this->_count > 8)
        count=8;
    else
        count = this->_count;
    putHeader();
    for(int i=0; i<count; i++)
        putLines(i, this->_contacts[i]);
    putFooter();
    std::cout << "Type down the number of the index that you'd like to search:\n";
    std::cin >> index;
    if(std::cin.good() && index >=0 && index<count)
        this->_contacts[index]->printContact();
    else
    {
        std::cin.clear();
        std::cout << "This ID does not exists.\n";
    }
    std::cin.ignore(10000, '\n');
}

void Phonebook::freeClass(){
    int max;
     
    if (this->getCount() > 8)
        max=8;
    else
        max =  this->getCount();
    for(int i=0; i < max; i++)
        delete this->_contacts[i];
}