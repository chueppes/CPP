#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("home", 66, 35), _target("home"){}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target):AForm("RobotomyRequestForm", 66, 35), _target(target){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy), _target(copy.getTarget()){}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "The destruuctor has been called.\n";
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy){
    this->_target = copy.getTarget();
    return *this;
}

std::string RobotomyRequestForm::getTarget() const{
    return this->_target;
}

void RobotomyRequestForm::execute(Bureaucrat const &exec)const{
    if(this->getIsSigned() == false)
        throw AForm::FormNotSignedException();
    else if (this->getExecuteGrade() < exec.getGrade())
        throw AForm::GradeTooLowException();
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox.\n";
    std::cout << "*inaudible robot noises*\n";
    if((rand() %10) % 2 ==0)
        std::cout << this->_target << " has become a robot.\n";
    else
        std::cout << "The robotomy of " << this->_target << " has failed.\n";

}
