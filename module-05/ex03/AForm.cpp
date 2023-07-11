#include "AForm.hpp"

AForm::AForm():_name("Mister"), _toSign(150), _toExecute(150){
    this->_isSigned=false;
}

AForm::~AForm(){
    std::cout << "Destructor called\n";
}

AForm::AForm(const AForm &copy) :_name(copy.getName()), _toSign(copy.getSignGrade()), _toExecute(copy.getExecuteGrade()), _isSigned(copy.getIsSigned()){

}

AForm::AForm(const std::string &name, int gradeSign, int gradeExec): _name(name), _toSign(gradeSign), _toExecute(gradeExec){
    this ->_isSigned = false;
    if(gradeSign < 1 || gradeExec < 1)
        throw GradeTooLowException();
    else if(gradeSign > 150 || gradeExec > 150)
        throw GradeTooHighException();
}

AForm &AForm::operator=(const AForm &copy){
    this->_isSigned=copy.getIsSigned();
    return(*this);
}


std::string AForm::getName() const{
    return(this->_name);
}

int AForm::getSignGrade() const{
    return(this->_toSign);
}

int AForm::getExecuteGrade() const{
    return(this->_toExecute);
}

bool AForm::getIsSigned() const{
    return(this->_isSigned);
}

void AForm::beSigned(const Bureaucrat &bureaucrat){
    if(bureaucrat.getGrade() > this->_toSign)
            throw AForm::GradeTooLowException();
    else
        this->_isSigned = true;
}

const char *AForm::GradeTooHighException::what() const throw(){
    return ("Error: The grade is too high.");
}

const char *AForm::GradeTooLowException::what() const throw(){
    return("Error: The grade is too low.");
}

std::ostream &operator<<(std::ostream &out, const AForm &form){
    out << form.getName() << " form sign with grade " << form.getSignGrade() << " and exec grade of " << form.getExecuteGrade() << "\nForm is signed: " << form.getIsSigned();
    return out;
}

void AForm::execute(Bureaucrat const &executor) const{
    (void)executor;
}
