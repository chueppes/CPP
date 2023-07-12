#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("home", 72, 45), _target("home"){}

RobotomyRequestForm::RobotomyRequestForm(const std::string target):AForm("RobotomyRequestForm", 72, 45), _target(target){}

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

void RobotomyRequestForm::execute(const Bureaucrat  &exec)const{
   if (this->getIsSigned() == false)
        throw AForm::FormNotSignedException();
    if (this->getExecuteGrade() < exec.getGrade())
        throw AForm::GradeTooLowException();
    std::srand(0);
    std::cout << " 🤖 BRRRRRRRRRRR 🤖 " << std::endl;
    if ((rand() % 10) % 2 == 0)
        std::cout << this->getTarget() << " has been robotomizes successfully!" << std::endl;
    else
        std::cout << "Robotomy failed. " << std::endl;
}


