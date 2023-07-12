#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Test", 25, 5), _target("home"){}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target):AForm("PresidentialPardonForm", 25, 5), _target(target){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy), _target(copy.getTarget()){}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "The destruuctor has been called.\n";
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy){
    this->_target = copy.getTarget();
    return *this;
}

std::string PresidentialPardonForm::getTarget() const{
    return this->_target;
}

void PresidentialPardonForm::execute(Bureaucrat const &exec)const{
    
    
    if(this->getIsSigned() == false)
        throw AForm::FormNotSignedException();
    if (this->getExecuteGrade() < exec.getGrade())
        throw AForm::GradeTooLowException();
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox.\n";

}
