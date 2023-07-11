#include "Intern.hpp"

Intern::Intern(){
    std::cout << "The constructor has been called.\n";
}

Intern::Intern(const Intern &target){
    *this=target;
}

Intern::~Intern(){
    std::cout << "The destructor has been called.\n";
}

Intern &Intern::operator=(const Intern &copy){
    if (this == &copy)
        return(*this);
    return(*this);
}

static AForm *makeShrubbery(const std::string &target){
    return new ShrubberyCreationForm(target);
}

static AForm *makeRobotomy(const std::string &target){
    return new RobotomyRequestForm(target);
}

static AForm *makePresident(const std::string &target){
    return new PresidentialPardonForm(target);
}

const char *Intern::internException::what() const throw(){
    return "Error: Oh shit, the intern screwed up again...\n";
}

AForm *Intern::makeForm(const std::string &form, const std::string &target){
    AForm *(*createForms[3]) (const std::string &target)={
        &makeShrubbery, &makeRobotomy, &makePresident
    };
    std::string titles[]={
        "shrubbery", "robotomy", "presidential"
    };
    for (int i=0; i<3; i++){
        if(titles[i] == form){
            std::cout << "The intern is, uh, trying to create " << form <<std::endl;
            return createForms[i](target);
        }
    }
    throw Intern::internException();
}