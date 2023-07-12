#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("home"){}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target):AForm("ShrubberyCreationForm", 145, 137), _target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy), _target(copy.getTarget()){}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "The destruuctor has been called.\n";
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy){
    this->_target = copy.getTarget();
    return *this;
}

std::string ShrubberyCreationForm::getTarget() const{
    return this->_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &exec)const{
    if(this->getIsSigned() == false)
        throw AForm::FormNotSignedException();
    if (this->getExecuteGrade() < exec.getGrade())
        throw AForm::GradeTooLowException();

    std::ofstream outFile((this->_target + "_shrubbery").c_str());
    outFile << "               ,@@@@@@@," << std::endl;
    outFile << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
    outFile << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
    outFile << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
    outFile << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
    outFile << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
    outFile << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
    outFile << "       |o|        | |         | |" << std::endl;
    outFile << "       |.|        | |         | |" << std::endl;
    outFile << "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
    outFile.close();
    std::cout << "Oh look! Your shruberry has fully grown!!\n";

}
